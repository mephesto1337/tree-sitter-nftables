function rule_matcher(keyword, choices) {
  return seq(keyword, choice(
    seq('{', choices, repeat(seq(',', choices)), '}'),
    choices
  ));
}

module.exports = grammar({
  name: 'nftables',

  rules: {
    config_file: $ => repeat(choice(
      $.statements,
      $.comment
    )),

    statements: $ => seq(
      $.statement,
      repeat(seq(';', $.statement)),
      $._end,
    ),

    comment: (_) => /#[^\n]*/,
    _eol: (_) => /\r?\n/,
    _end: ($) => seq(optional($.comment), $._eol),

    statement: $ => choice(
      $.flush_command,
      $.table_definition,
      $.destroy_command,
    ),

    flush_command: $ => seq('flush', choice(
      'ruleset',
      $.table_spec
    )),

    destroy_command: $ => seq('destroy', $.table_spec),

    table_spec: $ => seq('table', optional($.table_family), $.identifier),

    table_family: $ => choice(
      'ip',
      'ip6',
      'inet',
      'arp',
      'bridge',
      'netdev',
    ),
    protocol: $ => choice(
      'ip', 'ip6', 'icmp', 'udp', 'tcp', 'ipv6-icmp'
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    table_definition: $ => seq(
      $.table_spec,
      '{',
      repeat($.chain_definition),
      '}',
    ),

    chain_definition: $ => seq(
      $.chain_spec,
      '{',
      $.chain_type_definition,
      repeat($.rule_definition),
      '}'
    ),

    chain_spec: $ => seq('chain', $.identifier),

    chain_type: $ => choice('filter', 'route', 'nat'),
    hook_type: $ => choice('ingress', 'prerouting', 'input', 'forward', 'output', 'postrouting'),
    _priority_value: $ => seq(
      choice('raw', 'mangle', 'dstnat', 'filter', 'security', 'srcnat', 'dstnat', 'out'),
      optional(seq(
        choice('+', '-'),
        $.number
      ))
    ),

    number: $ => /\d+/,

    policy_values: $ => choice('accept', 'drop', 'reject'),

    chain_type_definition: $ => seq(
      'type',
      $.chain_type,
      'hook',
      $.hook_type,
      'priority',
      $._priority_value,
      ';',
      optional(
        seq('policy', $.policy_values, ';')
      )
    ),
    rule_decision: $ => choice($.policy_values, 'jump'),

    rule_definition: $ => seq(
      repeat($.packet_match),
      choice('counter', $.rule_decision),
      repeat($.packet_action),
    ),

    packet_match: $ => choice(
      $._packet_match_ct,
      $._packet_match_if,
      $._packet_match_proto,
      $._packet_match_meta,
      $._packet_match_port,
      $._packet_match_meta_pkttype,
      $._packet_match_limit,
    ),

    _packet_match_ct_values: $ => choice('established', 'related', 'new', 'invalid'),
    _packet_match_ct: $ => rule_matcher(seq('ct', 'state'), $._packet_match_ct_values),

    _packet_match_if: $ => rule_matcher(choice('iif', 'oif', 'iifname', 'oifname'), $.identifier),

    _packet_match_proto: $ => rule_matcher(seq($.protocol, 'protocol'), $.protocol),

    _packet_match_meta: $ => seq('meta', choice(
      $._packet_match_meta_pkttype,
      $._packet_match_meta_length,
      $._packet_match_meta_protocol,
      $._packet_match_meta_nfproto,
      $._packet_match_meta_l4proto
    )),
    _packet_match_meta_pkttype: $ => seq('pkttype', $._packet_match_meta_pkttype_values),
    _packet_match_meta_pkttype_values: $ => choice('host'),
    _packet_match_meta_length: $ => seq('length', $.number),
    _packet_match_meta_protocol: $ => seq('protocol', $.identifier),
    _packet_match_meta_nfproto: $ => seq('nfproto', $.table_family),
    _packet_match_meta_l4proto: $ => seq('l4proto', $.protocol),

    _packet_match_port: $ => rule_matcher(seq(choice('tcp', 'udp'), choice('sport', 'dport')), choice($.identifier, $.number)),

    _packet_match_limit: $ => seq('limit', 'rate', $.number, '/', choice('second', 'minute', 'hour')),

    packet_action: $ => choice($._packet_action_comment, $._packet_action_reject),

    _packet_action_comment: $ => seq('comment', $.string),
    _packet_action_reject: $ => seq('with', choice(
      $._packet_action_reject_icmp,
      $._packet_action_reject_icmpv6,
      $._packet_action_reject_icmpx
    )),
    _packet_action_reject_icmp: $ => seq('icmp', 'type', choice(
      'net-unreachable',
      'host-unreachable',
      'prot-unreachable',
      'port-unreachable',
      'net-prohibited',
      'host-prohibited',
      'admin-prohibited',
    )),
    _packet_action_reject_icmpv6: $ => seq('icmpv6', 'type', choice(
      'no-route',
      'admin-prohibited',
      'addr-unreachable',
      'port-unreachable',
    )),
    _packet_action_reject_icmpx: $ => seq('icmpx', 'type', choice(
      'admin-prohibited',
      'port-unreachable',
      'no-route',
      'host-unreachable',
    )),

    string: $ => /"[^"]+"/,
  }
})


