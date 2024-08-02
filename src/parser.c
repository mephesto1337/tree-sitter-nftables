#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  sym_comment = 3,
  sym__eol = 4,
  anon_sym_flush = 5,
  anon_sym_ruleset = 6,
  anon_sym_destroy = 7,
  anon_sym_table = 8,
  anon_sym_ip = 9,
  anon_sym_ip6 = 10,
  anon_sym_inet = 11,
  anon_sym_arp = 12,
  anon_sym_bridge = 13,
  anon_sym_netdev = 14,
  anon_sym_icmp = 15,
  anon_sym_udp = 16,
  anon_sym_tcp = 17,
  anon_sym_ipv6_DASHicmp = 18,
  sym_identifier = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_chain = 22,
  anon_sym_filter = 23,
  anon_sym_route = 24,
  anon_sym_nat = 25,
  anon_sym_ingress = 26,
  anon_sym_prerouting = 27,
  anon_sym_input = 28,
  anon_sym_forward = 29,
  anon_sym_output = 30,
  anon_sym_postrouting = 31,
  anon_sym_raw = 32,
  anon_sym_mangle = 33,
  anon_sym_dstnat = 34,
  anon_sym_security = 35,
  anon_sym_srcnat = 36,
  anon_sym_out = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  sym_number = 40,
  anon_sym_accept = 41,
  anon_sym_drop = 42,
  anon_sym_type = 43,
  anon_sym_hook = 44,
  anon_sym_priority = 45,
  anon_sym_policy = 46,
  anon_sym_jump = 47,
  anon_sym_reject = 48,
  anon_sym_counter = 49,
  anon_sym_established = 50,
  anon_sym_related = 51,
  anon_sym_new = 52,
  anon_sym_invalid = 53,
  anon_sym_ct = 54,
  anon_sym_state = 55,
  anon_sym_COMMA = 56,
  anon_sym_iif = 57,
  anon_sym_oif = 58,
  anon_sym_iifname = 59,
  anon_sym_oifname = 60,
  anon_sym_protocol = 61,
  anon_sym_meta = 62,
  anon_sym_pkttype = 63,
  anon_sym_host = 64,
  anon_sym_length = 65,
  anon_sym_nfproto = 66,
  anon_sym_l4proto = 67,
  anon_sym_sport = 68,
  anon_sym_dport = 69,
  anon_sym_limit = 70,
  anon_sym_rate = 71,
  anon_sym_SLASH = 72,
  anon_sym_second = 73,
  anon_sym_minute = 74,
  anon_sym_hour = 75,
  anon_sym_comment = 76,
  anon_sym_with = 77,
  anon_sym_net_DASHunreachable = 78,
  anon_sym_host_DASHunreachable = 79,
  anon_sym_prot_DASHunreachable = 80,
  anon_sym_port_DASHunreachable = 81,
  anon_sym_net_DASHprohibited = 82,
  anon_sym_host_DASHprohibited = 83,
  anon_sym_admin_DASHprohibited = 84,
  anon_sym_icmpv6 = 85,
  anon_sym_no_DASHroute = 86,
  anon_sym_addr_DASHunreachable = 87,
  anon_sym_icmpx = 88,
  sym_string = 89,
  sym_config_file = 90,
  sym__statement_sep = 91,
  sym_statements = 92,
  sym__end = 93,
  sym_statement = 94,
  sym_flush_command = 95,
  sym_destroy_command = 96,
  sym_table_spec = 97,
  sym_table_family = 98,
  sym_protocol = 99,
  sym_table_definition = 100,
  sym_chain_definition = 101,
  sym_chain_spec = 102,
  sym_chain_type = 103,
  sym_hook_type = 104,
  sym_priority_value = 105,
  sym_policy_values = 106,
  sym_chain_type_definition = 107,
  sym_rule_decision = 108,
  sym_jump = 109,
  sym_reject = 110,
  sym_rule_definition = 111,
  sym_packet_match = 112,
  sym__packet_match_ct_values = 113,
  sym__packet_match_ct = 114,
  sym__packet_match_if = 115,
  sym__packet_match_proto = 116,
  sym__packet_match_meta = 117,
  sym__packet_match_meta_pkttype = 118,
  sym__packet_match_meta_pkttype_values = 119,
  sym__packet_match_meta_length = 120,
  sym__packet_match_meta_protocol = 121,
  sym__packet_match_meta_nfproto = 122,
  sym__packet_match_meta_l4proto = 123,
  sym__packet_match_port = 124,
  sym__packet_match_limit = 125,
  sym_rule_action = 126,
  sym_rule_comment = 127,
  sym__packet_action_reject = 128,
  sym__packet_action_reject_icmp = 129,
  sym__packet_action_reject_icmpv6 = 130,
  sym__packet_action_reject_icmpx = 131,
  aux_sym_config_file_repeat1 = 132,
  aux_sym_statements_repeat1 = 133,
  aux_sym_table_definition_repeat1 = 134,
  aux_sym_chain_definition_repeat1 = 135,
  aux_sym_rule_definition_repeat1 = 136,
  aux_sym_rule_definition_repeat2 = 137,
  aux_sym__packet_match_ct_repeat1 = 138,
  aux_sym__packet_match_if_repeat1 = 139,
  aux_sym__packet_match_proto_repeat1 = 140,
  aux_sym__packet_match_port_repeat1 = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [sym__eol] = "_eol",
  [anon_sym_flush] = "flush",
  [anon_sym_ruleset] = "ruleset",
  [anon_sym_destroy] = "destroy",
  [anon_sym_table] = "table",
  [anon_sym_ip] = "ip",
  [anon_sym_ip6] = "ip6",
  [anon_sym_inet] = "inet",
  [anon_sym_arp] = "arp",
  [anon_sym_bridge] = "bridge",
  [anon_sym_netdev] = "netdev",
  [anon_sym_icmp] = "icmp",
  [anon_sym_udp] = "udp",
  [anon_sym_tcp] = "tcp",
  [anon_sym_ipv6_DASHicmp] = "ipv6-icmp",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_chain] = "chain",
  [anon_sym_filter] = "filter",
  [anon_sym_route] = "route",
  [anon_sym_nat] = "nat",
  [anon_sym_ingress] = "ingress",
  [anon_sym_prerouting] = "prerouting",
  [anon_sym_input] = "input",
  [anon_sym_forward] = "forward",
  [anon_sym_output] = "output",
  [anon_sym_postrouting] = "postrouting",
  [anon_sym_raw] = "raw",
  [anon_sym_mangle] = "mangle",
  [anon_sym_dstnat] = "dstnat",
  [anon_sym_security] = "security",
  [anon_sym_srcnat] = "srcnat",
  [anon_sym_out] = "out",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_number] = "number",
  [anon_sym_accept] = "accept",
  [anon_sym_drop] = "drop",
  [anon_sym_type] = "type",
  [anon_sym_hook] = "hook",
  [anon_sym_priority] = "priority",
  [anon_sym_policy] = "policy",
  [anon_sym_jump] = "jump",
  [anon_sym_reject] = "reject",
  [anon_sym_counter] = "counter",
  [anon_sym_established] = "established",
  [anon_sym_related] = "related",
  [anon_sym_new] = "new",
  [anon_sym_invalid] = "invalid",
  [anon_sym_ct] = "ct",
  [anon_sym_state] = "state",
  [anon_sym_COMMA] = ",",
  [anon_sym_iif] = "iif",
  [anon_sym_oif] = "oif",
  [anon_sym_iifname] = "iifname",
  [anon_sym_oifname] = "oifname",
  [anon_sym_protocol] = "protocol",
  [anon_sym_meta] = "meta",
  [anon_sym_pkttype] = "pkttype",
  [anon_sym_host] = "host",
  [anon_sym_length] = "length",
  [anon_sym_nfproto] = "nfproto",
  [anon_sym_l4proto] = "l4proto",
  [anon_sym_sport] = "sport",
  [anon_sym_dport] = "dport",
  [anon_sym_limit] = "limit",
  [anon_sym_rate] = "rate",
  [anon_sym_SLASH] = "/",
  [anon_sym_second] = "second",
  [anon_sym_minute] = "minute",
  [anon_sym_hour] = "hour",
  [anon_sym_comment] = "comment",
  [anon_sym_with] = "with",
  [anon_sym_net_DASHunreachable] = "net-unreachable",
  [anon_sym_host_DASHunreachable] = "host-unreachable",
  [anon_sym_prot_DASHunreachable] = "prot-unreachable",
  [anon_sym_port_DASHunreachable] = "port-unreachable",
  [anon_sym_net_DASHprohibited] = "net-prohibited",
  [anon_sym_host_DASHprohibited] = "host-prohibited",
  [anon_sym_admin_DASHprohibited] = "admin-prohibited",
  [anon_sym_icmpv6] = "icmpv6",
  [anon_sym_no_DASHroute] = "no-route",
  [anon_sym_addr_DASHunreachable] = "addr-unreachable",
  [anon_sym_icmpx] = "icmpx",
  [sym_string] = "string",
  [sym_config_file] = "config_file",
  [sym__statement_sep] = "_statement_sep",
  [sym_statements] = "statements",
  [sym__end] = "_end",
  [sym_statement] = "statement",
  [sym_flush_command] = "flush_command",
  [sym_destroy_command] = "destroy_command",
  [sym_table_spec] = "table_spec",
  [sym_table_family] = "table_family",
  [sym_protocol] = "protocol",
  [sym_table_definition] = "table_definition",
  [sym_chain_definition] = "chain_definition",
  [sym_chain_spec] = "chain_spec",
  [sym_chain_type] = "chain_type",
  [sym_hook_type] = "hook_type",
  [sym_priority_value] = "priority_value",
  [sym_policy_values] = "policy_values",
  [sym_chain_type_definition] = "chain_type_definition",
  [sym_rule_decision] = "rule_decision",
  [sym_jump] = "jump",
  [sym_reject] = "reject",
  [sym_rule_definition] = "rule_definition",
  [sym_packet_match] = "packet_match",
  [sym__packet_match_ct_values] = "_packet_match_ct_values",
  [sym__packet_match_ct] = "_packet_match_ct",
  [sym__packet_match_if] = "_packet_match_if",
  [sym__packet_match_proto] = "_packet_match_proto",
  [sym__packet_match_meta] = "_packet_match_meta",
  [sym__packet_match_meta_pkttype] = "_packet_match_meta_pkttype",
  [sym__packet_match_meta_pkttype_values] = "_packet_match_meta_pkttype_values",
  [sym__packet_match_meta_length] = "_packet_match_meta_length",
  [sym__packet_match_meta_protocol] = "_packet_match_meta_protocol",
  [sym__packet_match_meta_nfproto] = "_packet_match_meta_nfproto",
  [sym__packet_match_meta_l4proto] = "_packet_match_meta_l4proto",
  [sym__packet_match_port] = "_packet_match_port",
  [sym__packet_match_limit] = "_packet_match_limit",
  [sym_rule_action] = "rule_action",
  [sym_rule_comment] = "rule_comment",
  [sym__packet_action_reject] = "_packet_action_reject",
  [sym__packet_action_reject_icmp] = "_packet_action_reject_icmp",
  [sym__packet_action_reject_icmpv6] = "_packet_action_reject_icmpv6",
  [sym__packet_action_reject_icmpx] = "_packet_action_reject_icmpx",
  [aux_sym_config_file_repeat1] = "config_file_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_table_definition_repeat1] = "table_definition_repeat1",
  [aux_sym_chain_definition_repeat1] = "chain_definition_repeat1",
  [aux_sym_rule_definition_repeat1] = "rule_definition_repeat1",
  [aux_sym_rule_definition_repeat2] = "rule_definition_repeat2",
  [aux_sym__packet_match_ct_repeat1] = "_packet_match_ct_repeat1",
  [aux_sym__packet_match_if_repeat1] = "_packet_match_if_repeat1",
  [aux_sym__packet_match_proto_repeat1] = "_packet_match_proto_repeat1",
  [aux_sym__packet_match_port_repeat1] = "_packet_match_port_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [sym__eol] = sym__eol,
  [anon_sym_flush] = anon_sym_flush,
  [anon_sym_ruleset] = anon_sym_ruleset,
  [anon_sym_destroy] = anon_sym_destroy,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_ip6] = anon_sym_ip6,
  [anon_sym_inet] = anon_sym_inet,
  [anon_sym_arp] = anon_sym_arp,
  [anon_sym_bridge] = anon_sym_bridge,
  [anon_sym_netdev] = anon_sym_netdev,
  [anon_sym_icmp] = anon_sym_icmp,
  [anon_sym_udp] = anon_sym_udp,
  [anon_sym_tcp] = anon_sym_tcp,
  [anon_sym_ipv6_DASHicmp] = anon_sym_ipv6_DASHicmp,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_chain] = anon_sym_chain,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_route] = anon_sym_route,
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_ingress] = anon_sym_ingress,
  [anon_sym_prerouting] = anon_sym_prerouting,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_postrouting] = anon_sym_postrouting,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_mangle] = anon_sym_mangle,
  [anon_sym_dstnat] = anon_sym_dstnat,
  [anon_sym_security] = anon_sym_security,
  [anon_sym_srcnat] = anon_sym_srcnat,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_number] = sym_number,
  [anon_sym_accept] = anon_sym_accept,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_hook] = anon_sym_hook,
  [anon_sym_priority] = anon_sym_priority,
  [anon_sym_policy] = anon_sym_policy,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_reject] = anon_sym_reject,
  [anon_sym_counter] = anon_sym_counter,
  [anon_sym_established] = anon_sym_established,
  [anon_sym_related] = anon_sym_related,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_invalid] = anon_sym_invalid,
  [anon_sym_ct] = anon_sym_ct,
  [anon_sym_state] = anon_sym_state,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_iif] = anon_sym_iif,
  [anon_sym_oif] = anon_sym_oif,
  [anon_sym_iifname] = anon_sym_iifname,
  [anon_sym_oifname] = anon_sym_oifname,
  [anon_sym_protocol] = anon_sym_protocol,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_pkttype] = anon_sym_pkttype,
  [anon_sym_host] = anon_sym_host,
  [anon_sym_length] = anon_sym_length,
  [anon_sym_nfproto] = anon_sym_nfproto,
  [anon_sym_l4proto] = anon_sym_l4proto,
  [anon_sym_sport] = anon_sym_sport,
  [anon_sym_dport] = anon_sym_dport,
  [anon_sym_limit] = anon_sym_limit,
  [anon_sym_rate] = anon_sym_rate,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_second] = anon_sym_second,
  [anon_sym_minute] = anon_sym_minute,
  [anon_sym_hour] = anon_sym_hour,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_net_DASHunreachable] = anon_sym_net_DASHunreachable,
  [anon_sym_host_DASHunreachable] = anon_sym_host_DASHunreachable,
  [anon_sym_prot_DASHunreachable] = anon_sym_prot_DASHunreachable,
  [anon_sym_port_DASHunreachable] = anon_sym_port_DASHunreachable,
  [anon_sym_net_DASHprohibited] = anon_sym_net_DASHprohibited,
  [anon_sym_host_DASHprohibited] = anon_sym_host_DASHprohibited,
  [anon_sym_admin_DASHprohibited] = anon_sym_admin_DASHprohibited,
  [anon_sym_icmpv6] = anon_sym_icmpv6,
  [anon_sym_no_DASHroute] = anon_sym_no_DASHroute,
  [anon_sym_addr_DASHunreachable] = anon_sym_addr_DASHunreachable,
  [anon_sym_icmpx] = anon_sym_icmpx,
  [sym_string] = sym_string,
  [sym_config_file] = sym_config_file,
  [sym__statement_sep] = sym__statement_sep,
  [sym_statements] = sym_statements,
  [sym__end] = sym__end,
  [sym_statement] = sym_statement,
  [sym_flush_command] = sym_flush_command,
  [sym_destroy_command] = sym_destroy_command,
  [sym_table_spec] = sym_table_spec,
  [sym_table_family] = sym_table_family,
  [sym_protocol] = sym_protocol,
  [sym_table_definition] = sym_table_definition,
  [sym_chain_definition] = sym_chain_definition,
  [sym_chain_spec] = sym_chain_spec,
  [sym_chain_type] = sym_chain_type,
  [sym_hook_type] = sym_hook_type,
  [sym_priority_value] = sym_priority_value,
  [sym_policy_values] = sym_policy_values,
  [sym_chain_type_definition] = sym_chain_type_definition,
  [sym_rule_decision] = sym_rule_decision,
  [sym_jump] = sym_jump,
  [sym_reject] = sym_reject,
  [sym_rule_definition] = sym_rule_definition,
  [sym_packet_match] = sym_packet_match,
  [sym__packet_match_ct_values] = sym__packet_match_ct_values,
  [sym__packet_match_ct] = sym__packet_match_ct,
  [sym__packet_match_if] = sym__packet_match_if,
  [sym__packet_match_proto] = sym__packet_match_proto,
  [sym__packet_match_meta] = sym__packet_match_meta,
  [sym__packet_match_meta_pkttype] = sym__packet_match_meta_pkttype,
  [sym__packet_match_meta_pkttype_values] = sym__packet_match_meta_pkttype_values,
  [sym__packet_match_meta_length] = sym__packet_match_meta_length,
  [sym__packet_match_meta_protocol] = sym__packet_match_meta_protocol,
  [sym__packet_match_meta_nfproto] = sym__packet_match_meta_nfproto,
  [sym__packet_match_meta_l4proto] = sym__packet_match_meta_l4proto,
  [sym__packet_match_port] = sym__packet_match_port,
  [sym__packet_match_limit] = sym__packet_match_limit,
  [sym_rule_action] = sym_rule_action,
  [sym_rule_comment] = sym_rule_comment,
  [sym__packet_action_reject] = sym__packet_action_reject,
  [sym__packet_action_reject_icmp] = sym__packet_action_reject_icmp,
  [sym__packet_action_reject_icmpv6] = sym__packet_action_reject_icmpv6,
  [sym__packet_action_reject_icmpx] = sym__packet_action_reject_icmpx,
  [aux_sym_config_file_repeat1] = aux_sym_config_file_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_table_definition_repeat1] = aux_sym_table_definition_repeat1,
  [aux_sym_chain_definition_repeat1] = aux_sym_chain_definition_repeat1,
  [aux_sym_rule_definition_repeat1] = aux_sym_rule_definition_repeat1,
  [aux_sym_rule_definition_repeat2] = aux_sym_rule_definition_repeat2,
  [aux_sym__packet_match_ct_repeat1] = aux_sym__packet_match_ct_repeat1,
  [aux_sym__packet_match_if_repeat1] = aux_sym__packet_match_if_repeat1,
  [aux_sym__packet_match_proto_repeat1] = aux_sym__packet_match_proto_repeat1,
  [aux_sym__packet_match_port_repeat1] = aux_sym__packet_match_port_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_flush] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ruleset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_destroy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bridge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_netdev] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ipv6_DASHicmp] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ingress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prerouting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_postrouting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mangle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dstnat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_security] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_srcnat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_accept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hook] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_policy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_counter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_established] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_related] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invalid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_state] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iifname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oifname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protocol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pkttype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_length] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nfproto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l4proto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_second] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hour] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_net_DASHunreachable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host_DASHunreachable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prot_DASHunreachable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_port_DASHunreachable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_net_DASHprohibited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host_DASHprohibited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_admin_DASHprohibited] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmpv6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHroute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addr_DASHunreachable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icmpx] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_sep] = {
    .visible = false,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_flush_command] = {
    .visible = true,
    .named = true,
  },
  [sym_destroy_command] = {
    .visible = true,
    .named = true,
  },
  [sym_table_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_table_family] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol] = {
    .visible = true,
    .named = true,
  },
  [sym_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_type] = {
    .visible = true,
    .named = true,
  },
  [sym_hook_type] = {
    .visible = true,
    .named = true,
  },
  [sym_priority_value] = {
    .visible = true,
    .named = true,
  },
  [sym_policy_values] = {
    .visible = true,
    .named = true,
  },
  [sym_chain_type_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_decision] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_reject] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_packet_match] = {
    .visible = true,
    .named = true,
  },
  [sym__packet_match_ct_values] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_ct] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_if] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_proto] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_meta] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_meta_pkttype] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_meta_pkttype_values] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_meta_length] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_meta_protocol] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_meta_nfproto] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_meta_l4proto] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_port] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_match_limit] = {
    .visible = false,
    .named = true,
  },
  [sym_rule_action] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__packet_action_reject] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_action_reject_icmp] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_action_reject_icmpv6] = {
    .visible = false,
    .named = true,
  },
  [sym__packet_action_reject_icmpx] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chain_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__packet_match_ct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__packet_match_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__packet_match_proto_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__packet_match_port_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 24,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 102,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 99,
  [127] = 127,
  [128] = 128,
  [129] = 32,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(368);
      ADVANCE_MAP(
        '"', 367,
        '#', 371,
        '+', 429,
        ',', 447,
        '-', 430,
        '/', 464,
        ';', 369,
        'a', 55,
        'b', 259,
        'c', 135,
        'd', 118,
        'e', 284,
        'f', 149,
        'h', 214,
        'i', 56,
        'j', 352,
        'l', 13,
        'm', 31,
        'n', 22,
        'o', 151,
        'p', 172,
        'r', 20,
        's', 100,
        't', 16,
        'u', 81,
        'w', 156,
        '{', 410,
        '}', 411,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(371);
      if (lookahead == ';') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(370);
      if (lookahead == '+') ADVANCE(429);
      if (lookahead == '-') ADVANCE(430);
      if (lookahead == ';') ADVANCE(369);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(481);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(355);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(263);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(254);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(356);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(477);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'y') ADVANCE(246);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(453);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'a', 80,
        'b', 259,
        'd', 282,
        'f', 148,
        'h', 230,
        'i', 204,
        'm', 30,
        'n', 117,
        'o', 350,
        'p', 229,
        'r', 21,
        's', 109,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'b') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(396);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(331);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(182);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(163);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(183);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(185);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(378);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(361);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(191);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(144);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(465);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(444);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(476);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(260);
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(423);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(451);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(470);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 126:
      if (lookahead == 'f') ADVANCE(448);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(449);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(218);
      if (lookahead == 'h') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 'p') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(128);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(417);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(421);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(317);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(469);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(373);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(457);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(152);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(168);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(336);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 170:
      if (lookahead == 'j') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 171:
      if (lookahead == 'k') ADVANCE(435);
      END_STATE();
    case 172:
      if (lookahead == 'k') ADVANCE(330);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'p') ADVANCE(377);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(272);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(384);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(392);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(433);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(390);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(438);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(393);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(266);
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(271);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 254:
      if (lookahead == 'p') ADVANCE(277);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 272:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 273:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 274:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 275:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 276:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 277:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 278:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 279:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 280:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 281:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 282:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 283:
      if (lookahead == 's') ADVANCE(416);
      END_STATE();
    case 284:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 285:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 286:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 287:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 288:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 289:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 290:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 291:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 292:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == 'w') ADVANCE(443);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(382);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(462);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 307:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 308:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 309:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 310:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 311:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 312:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 313:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 314:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 315:
      if (lookahead == 't') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(422);
      END_STATE();
    case 316:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 317:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 318:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 319:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 320:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 321:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 322:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 323:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 324:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 325:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 326:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 327:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 328:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 329:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 330:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 331:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 332:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 333:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 334:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 335:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 337:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 338:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 339:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 340:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 341:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 342:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 343:
      if (lookahead == 'u') ADVANCE(285);
      END_STATE();
    case 344:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 345:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 346:
      if (lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 347:
      if (lookahead == 'u') ADVANCE(308);
      END_STATE();
    case 348:
      if (lookahead == 'u') ADVANCE(334);
      END_STATE();
    case 349:
      if (lookahead == 'u') ADVANCE(323);
      END_STATE();
    case 350:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 351:
      if (lookahead == 'u') ADVANCE(329);
      END_STATE();
    case 352:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 353:
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 354:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 355:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 356:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 357:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 358:
      if (lookahead == 'v') ADVANCE(388);
      END_STATE();
    case 359:
      if (lookahead == 'w') ADVANCE(422);
      END_STATE();
    case 360:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 361:
      if (lookahead == 'y') ADVANCE(437);
      END_STATE();
    case 362:
      if (lookahead == 'y') ADVANCE(375);
      END_STATE();
    case 363:
      if (lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 364:
      if (lookahead == 'y') ADVANCE(425);
      END_STATE();
    case 365:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 366:
      if (lookahead == '{') ADVANCE(410);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(366);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 367:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(3);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(372);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_flush);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_ruleset);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_destroy);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '6') ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '6') ADVANCE(380);
      if (lookahead == 'v') ADVANCE(15);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '6') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_ip6);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_ip6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_inet);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_inet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_arp);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_arp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_bridge);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_bridge);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_netdev);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_netdev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_icmp);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(480);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_ipv6_DASHicmp);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead == 'p') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_chain);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_nat);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_ingress);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_prerouting);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_postrouting);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_mangle);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_dstnat);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_security);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_srcnat);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == 'p') ADVANCE(347);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_accept);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_hook);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_policy);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_counter);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_established);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_related);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_invalid);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_ct);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_state);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_iif);
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_oif);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_iifname);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_oifname);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_protocol);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_pkttype);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_host);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_host);
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_length);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_nfproto);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_l4proto);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_sport);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_dport);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_rate);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_second);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_minute);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_hour);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_net_DASHunreachable);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_host_DASHunreachable);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_prot_DASHunreachable);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_port_DASHunreachable);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_net_DASHprohibited);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_host_DASHprohibited);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_admin_DASHprohibited);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_icmpv6);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_no_DASHroute);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_addr_DASHunreachable);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_icmpx);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 19},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 18},
  [57] = {.lex_state = 128},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 18},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 366},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 366},
  [113] = {.lex_state = 366},
  [114] = {.lex_state = 128},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 366},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 366},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 366},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 366},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 366},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 366},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 366},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 366},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_flush] = ACTIONS(1),
    [anon_sym_ruleset] = ACTIONS(1),
    [anon_sym_destroy] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_ip6] = ACTIONS(1),
    [anon_sym_inet] = ACTIONS(1),
    [anon_sym_arp] = ACTIONS(1),
    [anon_sym_bridge] = ACTIONS(1),
    [anon_sym_netdev] = ACTIONS(1),
    [anon_sym_icmp] = ACTIONS(1),
    [anon_sym_udp] = ACTIONS(1),
    [anon_sym_tcp] = ACTIONS(1),
    [anon_sym_ipv6_DASHicmp] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_chain] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_ingress] = ACTIONS(1),
    [anon_sym_prerouting] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_postrouting] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_mangle] = ACTIONS(1),
    [anon_sym_dstnat] = ACTIONS(1),
    [anon_sym_security] = ACTIONS(1),
    [anon_sym_srcnat] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_accept] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_hook] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_policy] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_counter] = ACTIONS(1),
    [anon_sym_established] = ACTIONS(1),
    [anon_sym_related] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_invalid] = ACTIONS(1),
    [anon_sym_ct] = ACTIONS(1),
    [anon_sym_state] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_iif] = ACTIONS(1),
    [anon_sym_oif] = ACTIONS(1),
    [anon_sym_iifname] = ACTIONS(1),
    [anon_sym_oifname] = ACTIONS(1),
    [anon_sym_protocol] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_pkttype] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_length] = ACTIONS(1),
    [anon_sym_nfproto] = ACTIONS(1),
    [anon_sym_l4proto] = ACTIONS(1),
    [anon_sym_sport] = ACTIONS(1),
    [anon_sym_dport] = ACTIONS(1),
    [anon_sym_limit] = ACTIONS(1),
    [anon_sym_rate] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_second] = ACTIONS(1),
    [anon_sym_minute] = ACTIONS(1),
    [anon_sym_hour] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_net_DASHunreachable] = ACTIONS(1),
    [anon_sym_host_DASHunreachable] = ACTIONS(1),
    [anon_sym_prot_DASHunreachable] = ACTIONS(1),
    [anon_sym_port_DASHunreachable] = ACTIONS(1),
    [anon_sym_net_DASHprohibited] = ACTIONS(1),
    [anon_sym_host_DASHprohibited] = ACTIONS(1),
    [anon_sym_admin_DASHprohibited] = ACTIONS(1),
    [anon_sym_icmpv6] = ACTIONS(1),
    [anon_sym_no_DASHroute] = ACTIONS(1),
    [anon_sym_addr_DASHunreachable] = ACTIONS(1),
    [anon_sym_icmpx] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_config_file] = STATE(143),
    [sym_statements] = STATE(48),
    [sym_statement] = STATE(64),
    [sym_flush_command] = STATE(82),
    [sym_destroy_command] = STATE(82),
    [sym_table_spec] = STATE(137),
    [sym_table_definition] = STATE(82),
    [aux_sym_config_file_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_flush] = ACTIONS(7),
    [anon_sym_destroy] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(13), 1,
      anon_sym_ip,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_jump,
    ACTIONS(25), 1,
      anon_sym_reject,
    ACTIONS(27), 1,
      anon_sym_counter,
    ACTIONS(29), 1,
      anon_sym_ct,
    ACTIONS(35), 1,
      anon_sym_meta,
    ACTIONS(37), 1,
      anon_sym_pkttype,
    ACTIONS(39), 1,
      anon_sym_limit,
    STATE(11), 1,
      sym_rule_decision,
    STATE(138), 1,
      sym_protocol,
    ACTIONS(17), 2,
      anon_sym_udp,
      anon_sym_tcp,
    ACTIONS(21), 2,
      anon_sym_accept,
      anon_sym_drop,
    ACTIONS(31), 2,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(33), 2,
      anon_sym_iifname,
      anon_sym_oifname,
    STATE(3), 2,
      sym_rule_definition,
      aux_sym_chain_definition_repeat1,
    STATE(5), 2,
      sym_packet_match,
      aux_sym_rule_definition_repeat1,
    ACTIONS(15), 3,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_ipv6_DASHicmp,
    STATE(21), 3,
      sym_policy_values,
      sym_jump,
      sym_reject,
    STATE(42), 7,
      sym__packet_match_ct,
      sym__packet_match_if,
      sym__packet_match_proto,
      sym__packet_match_meta,
      sym__packet_match_meta_pkttype,
      sym__packet_match_port,
      sym__packet_match_limit,
  [77] = 20,
    ACTIONS(41), 1,
      anon_sym_ip,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_jump,
    ACTIONS(58), 1,
      anon_sym_reject,
    ACTIONS(61), 1,
      anon_sym_counter,
    ACTIONS(64), 1,
      anon_sym_ct,
    ACTIONS(73), 1,
      anon_sym_meta,
    ACTIONS(76), 1,
      anon_sym_pkttype,
    ACTIONS(79), 1,
      anon_sym_limit,
    STATE(11), 1,
      sym_rule_decision,
    STATE(138), 1,
      sym_protocol,
    ACTIONS(47), 2,
      anon_sym_udp,
      anon_sym_tcp,
    ACTIONS(52), 2,
      anon_sym_accept,
      anon_sym_drop,
    ACTIONS(67), 2,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(70), 2,
      anon_sym_iifname,
      anon_sym_oifname,
    STATE(3), 2,
      sym_rule_definition,
      aux_sym_chain_definition_repeat1,
    STATE(5), 2,
      sym_packet_match,
      aux_sym_rule_definition_repeat1,
    ACTIONS(44), 3,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_ipv6_DASHicmp,
    STATE(21), 3,
      sym_policy_values,
      sym_jump,
      sym_reject,
    STATE(42), 7,
      sym__packet_match_ct,
      sym__packet_match_if,
      sym__packet_match_proto,
      sym__packet_match_meta,
      sym__packet_match_meta_pkttype,
      sym__packet_match_port,
      sym__packet_match_limit,
  [154] = 20,
    ACTIONS(13), 1,
      anon_sym_ip,
    ACTIONS(23), 1,
      anon_sym_jump,
    ACTIONS(25), 1,
      anon_sym_reject,
    ACTIONS(27), 1,
      anon_sym_counter,
    ACTIONS(29), 1,
      anon_sym_ct,
    ACTIONS(35), 1,
      anon_sym_meta,
    ACTIONS(37), 1,
      anon_sym_pkttype,
    ACTIONS(39), 1,
      anon_sym_limit,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_rule_decision,
    STATE(138), 1,
      sym_protocol,
    ACTIONS(17), 2,
      anon_sym_udp,
      anon_sym_tcp,
    ACTIONS(21), 2,
      anon_sym_accept,
      anon_sym_drop,
    ACTIONS(31), 2,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(33), 2,
      anon_sym_iifname,
      anon_sym_oifname,
    STATE(2), 2,
      sym_rule_definition,
      aux_sym_chain_definition_repeat1,
    STATE(5), 2,
      sym_packet_match,
      aux_sym_rule_definition_repeat1,
    ACTIONS(15), 3,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_ipv6_DASHicmp,
    STATE(21), 3,
      sym_policy_values,
      sym_jump,
      sym_reject,
    STATE(42), 7,
      sym__packet_match_ct,
      sym__packet_match_if,
      sym__packet_match_proto,
      sym__packet_match_meta,
      sym__packet_match_meta_pkttype,
      sym__packet_match_port,
      sym__packet_match_limit,
  [231] = 18,
    ACTIONS(13), 1,
      anon_sym_ip,
    ACTIONS(23), 1,
      anon_sym_jump,
    ACTIONS(25), 1,
      anon_sym_reject,
    ACTIONS(29), 1,
      anon_sym_ct,
    ACTIONS(35), 1,
      anon_sym_meta,
    ACTIONS(37), 1,
      anon_sym_pkttype,
    ACTIONS(39), 1,
      anon_sym_limit,
    ACTIONS(84), 1,
      anon_sym_counter,
    STATE(8), 1,
      sym_rule_decision,
    STATE(138), 1,
      sym_protocol,
    ACTIONS(17), 2,
      anon_sym_udp,
      anon_sym_tcp,
    ACTIONS(21), 2,
      anon_sym_accept,
      anon_sym_drop,
    ACTIONS(31), 2,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(33), 2,
      anon_sym_iifname,
      anon_sym_oifname,
    STATE(6), 2,
      sym_packet_match,
      aux_sym_rule_definition_repeat1,
    ACTIONS(15), 3,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_ipv6_DASHicmp,
    STATE(21), 3,
      sym_policy_values,
      sym_jump,
      sym_reject,
    STATE(42), 7,
      sym__packet_match_ct,
      sym__packet_match_if,
      sym__packet_match_proto,
      sym__packet_match_meta,
      sym__packet_match_meta_pkttype,
      sym__packet_match_port,
      sym__packet_match_limit,
  [301] = 13,
    ACTIONS(86), 1,
      anon_sym_ip,
    ACTIONS(97), 1,
      anon_sym_ct,
    ACTIONS(106), 1,
      anon_sym_meta,
    ACTIONS(109), 1,
      anon_sym_pkttype,
    ACTIONS(112), 1,
      anon_sym_limit,
    STATE(138), 1,
      sym_protocol,
    ACTIONS(92), 2,
      anon_sym_udp,
      anon_sym_tcp,
    ACTIONS(100), 2,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(103), 2,
      anon_sym_iifname,
      anon_sym_oifname,
    STATE(6), 2,
      sym_packet_match,
      aux_sym_rule_definition_repeat1,
    ACTIONS(89), 3,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_ipv6_DASHicmp,
    ACTIONS(95), 5,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
    STATE(42), 7,
      sym__packet_match_ct,
      sym__packet_match_if,
      sym__packet_match_proto,
      sym__packet_match_meta,
      sym__packet_match_meta_pkttype,
      sym__packet_match_port,
      sym__packet_match_limit,
  [357] = 5,
    ACTIONS(119), 1,
      anon_sym_comment,
    STATE(15), 1,
      sym_rule_comment,
    STATE(10), 2,
      sym_rule_action,
      aux_sym_rule_definition_repeat2,
    ACTIONS(115), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(117), 17,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [392] = 5,
    ACTIONS(119), 1,
      anon_sym_comment,
    STATE(15), 1,
      sym_rule_comment,
    STATE(7), 2,
      sym_rule_action,
      aux_sym_rule_definition_repeat2,
    ACTIONS(121), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(123), 17,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [427] = 5,
    ACTIONS(119), 1,
      anon_sym_comment,
    STATE(15), 1,
      sym_rule_comment,
    STATE(10), 2,
      sym_rule_action,
      aux_sym_rule_definition_repeat2,
    ACTIONS(121), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(123), 17,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [462] = 5,
    ACTIONS(129), 1,
      anon_sym_comment,
    STATE(15), 1,
      sym_rule_comment,
    STATE(10), 2,
      sym_rule_action,
      aux_sym_rule_definition_repeat2,
    ACTIONS(125), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(127), 17,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [497] = 5,
    ACTIONS(119), 1,
      anon_sym_comment,
    STATE(15), 1,
      sym_rule_comment,
    STATE(9), 2,
      sym_rule_action,
      aux_sym_rule_definition_repeat2,
    ACTIONS(132), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(134), 17,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [532] = 4,
    ACTIONS(140), 1,
      anon_sym_with,
    STATE(18), 1,
      sym__packet_action_reject,
    ACTIONS(136), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(138), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [564] = 2,
    ACTIONS(142), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(144), 19,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_COMMA,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_protocol,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [591] = 2,
    ACTIONS(146), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(148), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [617] = 2,
    ACTIONS(150), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(152), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [643] = 3,
    ACTIONS(158), 1,
      anon_sym_policy,
    ACTIONS(154), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(156), 17,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [671] = 2,
    ACTIONS(160), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(162), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [697] = 2,
    ACTIONS(164), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(166), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [723] = 2,
    ACTIONS(168), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(170), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [749] = 2,
    ACTIONS(172), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(174), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [775] = 2,
    ACTIONS(176), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(178), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [801] = 2,
    ACTIONS(180), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(182), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [827] = 2,
    ACTIONS(184), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(186), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [853] = 2,
    ACTIONS(188), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(190), 18,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
      anon_sym_comment,
  [879] = 2,
    ACTIONS(192), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(194), 17,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_RBRACE,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [904] = 2,
    ACTIONS(196), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(198), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [928] = 2,
    ACTIONS(200), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(202), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [952] = 2,
    ACTIONS(204), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(206), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [976] = 2,
    ACTIONS(208), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(210), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1000] = 2,
    ACTIONS(212), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(214), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1024] = 2,
    ACTIONS(216), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(218), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1048] = 2,
    ACTIONS(220), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(222), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1072] = 2,
    ACTIONS(224), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(226), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1096] = 2,
    ACTIONS(228), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(230), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1120] = 2,
    ACTIONS(232), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(234), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1144] = 2,
    ACTIONS(236), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(238), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1168] = 2,
    ACTIONS(240), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(242), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1192] = 2,
    ACTIONS(244), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(246), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1216] = 2,
    ACTIONS(248), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(250), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1240] = 2,
    ACTIONS(252), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(254), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1264] = 2,
    ACTIONS(256), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(258), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1288] = 2,
    ACTIONS(260), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(262), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1312] = 2,
    ACTIONS(264), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(266), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1336] = 2,
    ACTIONS(268), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(270), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1360] = 2,
    ACTIONS(272), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(274), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1384] = 2,
    ACTIONS(276), 3,
      anon_sym_ip,
      anon_sym_iif,
      anon_sym_oif,
    ACTIONS(278), 16,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
      anon_sym_accept,
      anon_sym_drop,
      anon_sym_jump,
      anon_sym_reject,
      anon_sym_counter,
      anon_sym_ct,
      anon_sym_iifname,
      anon_sym_oifname,
      anon_sym_meta,
      anon_sym_pkttype,
      anon_sym_limit,
  [1408] = 9,
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    ACTIONS(282), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_flush,
    ACTIONS(288), 1,
      anon_sym_destroy,
    ACTIONS(291), 1,
      anon_sym_table,
    STATE(64), 1,
      sym_statement,
    STATE(137), 1,
      sym_table_spec,
    STATE(47), 2,
      sym_statements,
      aux_sym_config_file_repeat1,
    STATE(82), 3,
      sym_flush_command,
      sym_destroy_command,
      sym_table_definition,
  [1439] = 9,
    ACTIONS(7), 1,
      anon_sym_flush,
    ACTIONS(9), 1,
      anon_sym_destroy,
    ACTIONS(11), 1,
      anon_sym_table,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      sym_comment,
    STATE(64), 1,
      sym_statement,
    STATE(137), 1,
      sym_table_spec,
    STATE(47), 2,
      sym_statements,
      aux_sym_config_file_repeat1,
    STATE(82), 3,
      sym_flush_command,
      sym_destroy_command,
      sym_table_definition,
  [1470] = 6,
    ACTIONS(37), 1,
      anon_sym_pkttype,
    ACTIONS(298), 1,
      anon_sym_protocol,
    ACTIONS(300), 1,
      anon_sym_length,
    ACTIONS(302), 1,
      anon_sym_nfproto,
    ACTIONS(304), 1,
      anon_sym_l4proto,
    STATE(38), 5,
      sym__packet_match_meta_pkttype,
      sym__packet_match_meta_length,
      sym__packet_match_meta_protocol,
      sym__packet_match_meta_nfproto,
      sym__packet_match_meta_l4proto,
  [1493] = 2,
    STATE(95), 1,
      sym_priority_value,
    ACTIONS(306), 7,
      anon_sym_filter,
      anon_sym_raw,
      anon_sym_mangle,
      anon_sym_dstnat,
      anon_sym_security,
      anon_sym_srcnat,
      anon_sym_out,
  [1506] = 3,
    ACTIONS(310), 1,
      sym_identifier,
    STATE(125), 1,
      sym_table_family,
    ACTIONS(308), 6,
      anon_sym_ip,
      anon_sym_ip6,
      anon_sym_inet,
      anon_sym_arp,
      anon_sym_bridge,
      anon_sym_netdev,
  [1521] = 6,
    ACTIONS(7), 1,
      anon_sym_flush,
    ACTIONS(9), 1,
      anon_sym_destroy,
    ACTIONS(11), 1,
      anon_sym_table,
    STATE(88), 1,
      sym_statement,
    STATE(137), 1,
      sym_table_spec,
    STATE(82), 3,
      sym_flush_command,
      sym_destroy_command,
      sym_table_definition,
  [1542] = 3,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(148), 1,
      sym_table_family,
    ACTIONS(308), 6,
      anon_sym_ip,
      anon_sym_ip6,
      anon_sym_inet,
      anon_sym_arp,
      anon_sym_bridge,
      anon_sym_netdev,
  [1557] = 4,
    ACTIONS(13), 1,
      anon_sym_ip,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_protocol,
    ACTIONS(15), 5,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
  [1574] = 3,
    ACTIONS(13), 1,
      anon_sym_ip,
    STATE(46), 1,
      sym_protocol,
    ACTIONS(15), 5,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
  [1588] = 3,
    ACTIONS(316), 1,
      anon_sym_ip,
    STATE(27), 1,
      sym_table_family,
    ACTIONS(318), 5,
      anon_sym_ip6,
      anon_sym_inet,
      anon_sym_arp,
      anon_sym_bridge,
      anon_sym_netdev,
  [1602] = 2,
    STATE(146), 1,
      sym_hook_type,
    ACTIONS(320), 6,
      anon_sym_ingress,
      anon_sym_prerouting,
      anon_sym_input,
      anon_sym_forward,
      anon_sym_output,
      anon_sym_postrouting,
  [1614] = 3,
    ACTIONS(13), 1,
      anon_sym_ip,
    STATE(96), 1,
      sym_protocol,
    ACTIONS(15), 5,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
  [1628] = 3,
    ACTIONS(13), 1,
      anon_sym_ip,
    STATE(26), 1,
      sym_protocol,
    ACTIONS(15), 5,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
  [1642] = 3,
    ACTIONS(13), 1,
      anon_sym_ip,
    STATE(116), 1,
      sym_protocol,
    ACTIONS(15), 5,
      anon_sym_ip6,
      anon_sym_icmp,
      anon_sym_udp,
      anon_sym_tcp,
      anon_sym_ipv6_DASHicmp,
  [1656] = 1,
    ACTIONS(322), 7,
      anon_sym_net_DASHunreachable,
      anon_sym_host_DASHunreachable,
      anon_sym_prot_DASHunreachable,
      anon_sym_port_DASHunreachable,
      anon_sym_net_DASHprohibited,
      anon_sym_host_DASHprohibited,
      anon_sym_admin_DASHprohibited,
  [1666] = 4,
    ACTIONS(324), 1,
      anon_sym_icmp,
    ACTIONS(326), 1,
      anon_sym_icmpv6,
    ACTIONS(328), 1,
      anon_sym_icmpx,
    STATE(17), 3,
      sym__packet_action_reject_icmp,
      sym__packet_action_reject_icmpv6,
      sym__packet_action_reject_icmpx,
  [1681] = 3,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym__packet_match_ct_values,
    ACTIONS(332), 4,
      anon_sym_established,
      anon_sym_related,
      anon_sym_new,
      anon_sym_invalid,
  [1694] = 5,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym__eol,
    STATE(65), 1,
      sym__end,
    STATE(67), 1,
      aux_sym_statements_repeat1,
  [1710] = 1,
    ACTIONS(340), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_flush,
      anon_sym_destroy,
      anon_sym_table,
  [1718] = 1,
    ACTIONS(342), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_flush,
      anon_sym_destroy,
      anon_sym_table,
  [1726] = 5,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    ACTIONS(336), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__eol,
    STATE(66), 1,
      sym__end,
    STATE(76), 1,
      aux_sym_statements_repeat1,
  [1742] = 4,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      anon_sym_chain,
    STATE(121), 1,
      sym_chain_spec,
    STATE(73), 2,
      sym_chain_definition,
      aux_sym_table_definition_repeat1,
  [1756] = 2,
    STATE(104), 1,
      sym__packet_match_ct_values,
    ACTIONS(350), 4,
      anon_sym_established,
      anon_sym_related,
      anon_sym_new,
      anon_sym_invalid,
  [1766] = 1,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_flush,
      anon_sym_destroy,
      anon_sym_table,
  [1774] = 2,
    STATE(111), 1,
      sym__packet_match_ct_values,
    ACTIONS(354), 4,
      anon_sym_established,
      anon_sym_related,
      anon_sym_new,
      anon_sym_invalid,
  [1784] = 4,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 1,
      anon_sym_chain,
    STATE(121), 1,
      sym_chain_spec,
    STATE(72), 2,
      sym_chain_definition,
      aux_sym_table_definition_repeat1,
  [1798] = 4,
    ACTIONS(348), 1,
      anon_sym_chain,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_chain_spec,
    STATE(72), 2,
      sym_chain_definition,
      aux_sym_table_definition_repeat1,
  [1812] = 3,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_LF,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1823] = 2,
    STATE(133), 1,
      sym_chain_type,
    ACTIONS(369), 3,
      anon_sym_filter,
      anon_sym_route,
      anon_sym_nat,
  [1832] = 4,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    ACTIONS(374), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym__eol,
    STATE(76), 1,
      aux_sym_statements_repeat1,
  [1845] = 1,
    ACTIONS(378), 4,
      anon_sym_host_DASHunreachable,
      anon_sym_port_DASHunreachable,
      anon_sym_admin_DASHprohibited,
      anon_sym_no_DASHroute,
  [1852] = 1,
    ACTIONS(380), 4,
      anon_sym_port_DASHunreachable,
      anon_sym_admin_DASHprohibited,
      anon_sym_no_DASHroute,
      anon_sym_addr_DASHunreachable,
  [1859] = 2,
    ACTIONS(144), 1,
      anon_sym_protocol,
    ACTIONS(382), 2,
      anon_sym_sport,
      anon_sym_dport,
  [1867] = 3,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym__packet_match_port_repeat1,
  [1877] = 3,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym__packet_match_if_repeat1,
  [1887] = 2,
    ACTIONS(395), 1,
      sym__eol,
    ACTIONS(393), 2,
      anon_sym_SEMI,
      sym_comment,
  [1895] = 3,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      anon_sym_LF,
    STATE(25), 1,
      sym__statement_sep,
  [1905] = 2,
    STATE(83), 1,
      sym_policy_values,
    ACTIONS(401), 2,
      anon_sym_accept,
      anon_sym_drop,
  [1913] = 3,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym__packet_match_ct_repeat1,
  [1923] = 3,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym__packet_match_proto_repeat1,
  [1933] = 2,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 2,
      sym_identifier,
      sym_number,
  [1941] = 2,
    ACTIONS(376), 1,
      sym__eol,
    ACTIONS(374), 2,
      anon_sym_SEMI,
      sym_comment,
  [1949] = 3,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym__packet_match_ct_repeat1,
  [1959] = 3,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__packet_match_if_repeat1,
  [1969] = 2,
    ACTIONS(427), 1,
      sym__eol,
    ACTIONS(425), 2,
      anon_sym_SEMI,
      sym_comment,
  [1977] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym__packet_match_port_repeat1,
  [1987] = 3,
    ACTIONS(431), 1,
      anon_sym_ruleset,
    ACTIONS(433), 1,
      anon_sym_table,
    STATE(94), 1,
      sym_table_spec,
  [1997] = 2,
    ACTIONS(437), 1,
      sym__eol,
    ACTIONS(435), 2,
      anon_sym_SEMI,
      sym_comment,
  [2005] = 3,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym__statement_sep,
  [2015] = 3,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__packet_match_proto_repeat1,
  [2025] = 3,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(86), 1,
      aux_sym__packet_match_proto_repeat1,
  [2035] = 3,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym__packet_match_port_repeat1,
  [2045] = 2,
    ACTIONS(456), 1,
      sym__eol,
    ACTIONS(454), 2,
      anon_sym_SEMI,
      sym_comment,
  [2053] = 1,
    ACTIONS(458), 3,
      anon_sym_second,
      anon_sym_minute,
      anon_sym_hour,
  [2059] = 2,
    ACTIONS(462), 1,
      sym__eol,
    ACTIONS(460), 2,
      anon_sym_SEMI,
      sym_comment,
  [2067] = 2,
    ACTIONS(466), 1,
      sym__eol,
    ACTIONS(464), 2,
      anon_sym_SEMI,
      sym_comment,
  [2075] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym__packet_match_if_repeat1,
  [2085] = 3,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      aux_sym__packet_match_ct_repeat1,
  [2095] = 2,
    ACTIONS(474), 1,
      sym__eol,
    ACTIONS(472), 2,
      anon_sym_SEMI,
      sym_comment,
  [2103] = 1,
    ACTIONS(449), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2108] = 2,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_LF,
  [2115] = 1,
    ACTIONS(476), 2,
      anon_sym_RBRACE,
      anon_sym_chain,
  [2120] = 1,
    ACTIONS(478), 2,
      anon_sym_RBRACE,
      anon_sym_chain,
  [2125] = 2,
    ACTIONS(480), 1,
      anon_sym_type,
    STATE(4), 1,
      sym_chain_type_definition,
  [2132] = 1,
    ACTIONS(416), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2137] = 1,
    ACTIONS(482), 2,
      sym_identifier,
      sym_number,
  [2142] = 2,
    ACTIONS(484), 1,
      sym_identifier,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
  [2149] = 2,
    ACTIONS(488), 1,
      anon_sym_host,
    STATE(35), 1,
      sym__packet_match_meta_pkttype_values,
  [2156] = 2,
    ACTIONS(433), 1,
      anon_sym_table,
    STATE(101), 1,
      sym_table_spec,
  [2163] = 1,
    ACTIONS(407), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2168] = 2,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    ACTIONS(492), 1,
      anon_sym_LF,
  [2175] = 1,
    ACTIONS(388), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [2180] = 1,
    ACTIONS(494), 2,
      sym_identifier,
      sym_number,
  [2185] = 1,
    ACTIONS(496), 1,
      anon_sym_state,
  [2189] = 1,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
  [2193] = 1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
  [2197] = 1,
    ACTIONS(500), 1,
      sym_identifier,
  [2201] = 1,
    ACTIONS(502), 1,
      sym__eol,
  [2205] = 1,
    ACTIONS(504), 1,
      sym_identifier,
  [2209] = 1,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
  [2213] = 1,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
  [2217] = 1,
    ACTIONS(508), 1,
      sym_number,
  [2221] = 1,
    ACTIONS(222), 1,
      sym_identifier,
  [2225] = 1,
    ACTIONS(510), 1,
      sym_number,
  [2229] = 1,
    ACTIONS(512), 1,
      sym_identifier,
  [2233] = 1,
    ACTIONS(514), 1,
      anon_sym_hook,
  [2237] = 1,
    ACTIONS(516), 1,
      anon_sym_hook,
  [2241] = 1,
    ACTIONS(518), 1,
      anon_sym_SLASH,
  [2245] = 1,
    ACTIONS(520), 1,
      sym_identifier,
  [2249] = 1,
    ACTIONS(522), 1,
      anon_sym_rate,
  [2253] = 1,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
  [2257] = 1,
    ACTIONS(526), 1,
      anon_sym_protocol,
  [2261] = 1,
    ACTIONS(528), 1,
      sym_string,
  [2265] = 1,
    ACTIONS(530), 1,
      sym_identifier,
  [2269] = 1,
    ACTIONS(532), 1,
      anon_sym_type,
  [2273] = 1,
    ACTIONS(534), 1,
      anon_sym_type,
  [2277] = 1,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
  [2281] = 1,
    ACTIONS(538), 1,
      anon_sym_type,
  [2285] = 1,
    ACTIONS(540), 1,
      sym_number,
  [2289] = 1,
    ACTIONS(542), 1,
      anon_sym_priority,
  [2293] = 1,
    ACTIONS(544), 1,
      anon_sym_priority,
  [2297] = 1,
    ACTIONS(546), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 301,
  [SMALL_STATE(7)] = 357,
  [SMALL_STATE(8)] = 392,
  [SMALL_STATE(9)] = 427,
  [SMALL_STATE(10)] = 462,
  [SMALL_STATE(11)] = 497,
  [SMALL_STATE(12)] = 532,
  [SMALL_STATE(13)] = 564,
  [SMALL_STATE(14)] = 591,
  [SMALL_STATE(15)] = 617,
  [SMALL_STATE(16)] = 643,
  [SMALL_STATE(17)] = 671,
  [SMALL_STATE(18)] = 697,
  [SMALL_STATE(19)] = 723,
  [SMALL_STATE(20)] = 749,
  [SMALL_STATE(21)] = 775,
  [SMALL_STATE(22)] = 801,
  [SMALL_STATE(23)] = 827,
  [SMALL_STATE(24)] = 853,
  [SMALL_STATE(25)] = 879,
  [SMALL_STATE(26)] = 904,
  [SMALL_STATE(27)] = 928,
  [SMALL_STATE(28)] = 952,
  [SMALL_STATE(29)] = 976,
  [SMALL_STATE(30)] = 1000,
  [SMALL_STATE(31)] = 1024,
  [SMALL_STATE(32)] = 1048,
  [SMALL_STATE(33)] = 1072,
  [SMALL_STATE(34)] = 1096,
  [SMALL_STATE(35)] = 1120,
  [SMALL_STATE(36)] = 1144,
  [SMALL_STATE(37)] = 1168,
  [SMALL_STATE(38)] = 1192,
  [SMALL_STATE(39)] = 1216,
  [SMALL_STATE(40)] = 1240,
  [SMALL_STATE(41)] = 1264,
  [SMALL_STATE(42)] = 1288,
  [SMALL_STATE(43)] = 1312,
  [SMALL_STATE(44)] = 1336,
  [SMALL_STATE(45)] = 1360,
  [SMALL_STATE(46)] = 1384,
  [SMALL_STATE(47)] = 1408,
  [SMALL_STATE(48)] = 1439,
  [SMALL_STATE(49)] = 1470,
  [SMALL_STATE(50)] = 1493,
  [SMALL_STATE(51)] = 1506,
  [SMALL_STATE(52)] = 1521,
  [SMALL_STATE(53)] = 1542,
  [SMALL_STATE(54)] = 1557,
  [SMALL_STATE(55)] = 1574,
  [SMALL_STATE(56)] = 1588,
  [SMALL_STATE(57)] = 1602,
  [SMALL_STATE(58)] = 1614,
  [SMALL_STATE(59)] = 1628,
  [SMALL_STATE(60)] = 1642,
  [SMALL_STATE(61)] = 1656,
  [SMALL_STATE(62)] = 1666,
  [SMALL_STATE(63)] = 1681,
  [SMALL_STATE(64)] = 1694,
  [SMALL_STATE(65)] = 1710,
  [SMALL_STATE(66)] = 1718,
  [SMALL_STATE(67)] = 1726,
  [SMALL_STATE(68)] = 1742,
  [SMALL_STATE(69)] = 1756,
  [SMALL_STATE(70)] = 1766,
  [SMALL_STATE(71)] = 1774,
  [SMALL_STATE(72)] = 1784,
  [SMALL_STATE(73)] = 1798,
  [SMALL_STATE(74)] = 1812,
  [SMALL_STATE(75)] = 1823,
  [SMALL_STATE(76)] = 1832,
  [SMALL_STATE(77)] = 1845,
  [SMALL_STATE(78)] = 1852,
  [SMALL_STATE(79)] = 1859,
  [SMALL_STATE(80)] = 1867,
  [SMALL_STATE(81)] = 1877,
  [SMALL_STATE(82)] = 1887,
  [SMALL_STATE(83)] = 1895,
  [SMALL_STATE(84)] = 1905,
  [SMALL_STATE(85)] = 1913,
  [SMALL_STATE(86)] = 1923,
  [SMALL_STATE(87)] = 1933,
  [SMALL_STATE(88)] = 1941,
  [SMALL_STATE(89)] = 1949,
  [SMALL_STATE(90)] = 1959,
  [SMALL_STATE(91)] = 1969,
  [SMALL_STATE(92)] = 1977,
  [SMALL_STATE(93)] = 1987,
  [SMALL_STATE(94)] = 1997,
  [SMALL_STATE(95)] = 2005,
  [SMALL_STATE(96)] = 2015,
  [SMALL_STATE(97)] = 2025,
  [SMALL_STATE(98)] = 2035,
  [SMALL_STATE(99)] = 2045,
  [SMALL_STATE(100)] = 2053,
  [SMALL_STATE(101)] = 2059,
  [SMALL_STATE(102)] = 2067,
  [SMALL_STATE(103)] = 2075,
  [SMALL_STATE(104)] = 2085,
  [SMALL_STATE(105)] = 2095,
  [SMALL_STATE(106)] = 2103,
  [SMALL_STATE(107)] = 2108,
  [SMALL_STATE(108)] = 2115,
  [SMALL_STATE(109)] = 2120,
  [SMALL_STATE(110)] = 2125,
  [SMALL_STATE(111)] = 2132,
  [SMALL_STATE(112)] = 2137,
  [SMALL_STATE(113)] = 2142,
  [SMALL_STATE(114)] = 2149,
  [SMALL_STATE(115)] = 2156,
  [SMALL_STATE(116)] = 2163,
  [SMALL_STATE(117)] = 2168,
  [SMALL_STATE(118)] = 2175,
  [SMALL_STATE(119)] = 2180,
  [SMALL_STATE(120)] = 2185,
  [SMALL_STATE(121)] = 2189,
  [SMALL_STATE(122)] = 2193,
  [SMALL_STATE(123)] = 2197,
  [SMALL_STATE(124)] = 2201,
  [SMALL_STATE(125)] = 2205,
  [SMALL_STATE(126)] = 2209,
  [SMALL_STATE(127)] = 2213,
  [SMALL_STATE(128)] = 2217,
  [SMALL_STATE(129)] = 2221,
  [SMALL_STATE(130)] = 2225,
  [SMALL_STATE(131)] = 2229,
  [SMALL_STATE(132)] = 2233,
  [SMALL_STATE(133)] = 2237,
  [SMALL_STATE(134)] = 2241,
  [SMALL_STATE(135)] = 2245,
  [SMALL_STATE(136)] = 2249,
  [SMALL_STATE(137)] = 2253,
  [SMALL_STATE(138)] = 2257,
  [SMALL_STATE(139)] = 2261,
  [SMALL_STATE(140)] = 2265,
  [SMALL_STATE(141)] = 2269,
  [SMALL_STATE(142)] = 2273,
  [SMALL_STATE(143)] = 2277,
  [SMALL_STATE(144)] = 2281,
  [SMALL_STATE(145)] = 2285,
  [SMALL_STATE(146)] = 2289,
  [SMALL_STATE(147)] = 2293,
  [SMALL_STATE(148)] = 2297,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chain_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rule_definition_repeat2, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat2, 2, 0, 0),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(139),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_definition, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reject, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reject, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_action_reject_icmpx, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_action_reject_icmpx, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_action, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_action, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chain_type_definition, 7, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_type_definition, 7, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_action_reject, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_action_reject, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reject, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reject, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_comment, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_comment, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule_decision, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_decision, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_action_reject_icmpv6, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_action_reject_icmpv6, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_action_reject_icmp, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_action_reject_icmp, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_policy_values, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_policy_values, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chain_type_definition, 10, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_type_definition, 10, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_meta_l4proto, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_meta_l4proto, 2, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_meta_nfproto, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_meta_nfproto, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_ct, 5, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_ct, 5, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_if, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_if, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_port, 6, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_port, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_port, 5, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_port, 5, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_family, 1, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_family, 1, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_if, 4, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_if, 4, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_proto, 5, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_proto, 5, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_meta_pkttype, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_meta_pkttype, 2, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_port, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_port, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_limit, 5, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_limit, 5, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_meta, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_meta, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_proto, 3, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_proto, 3, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_proto, 6, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_proto, 6, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_if, 5, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_if, 5, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_packet_match, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_packet_match, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_ct, 6, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_ct, 6, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_ct, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_ct, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_meta_length, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_meta_length, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__packet_match_meta_protocol, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__packet_match_meta_protocol, 2, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end, 2, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority_value, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority_value, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__packet_match_if_repeat1, 2, 0, 0),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__packet_match_if_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__packet_match_proto_repeat1, 2, 0, 0),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__packet_match_proto_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__packet_match_ct_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__packet_match_ct_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flush_command, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flush_command, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__packet_match_port_repeat1, 2, 0, 0),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__packet_match_port_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_spec, 2, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_spec, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_destroy_command, 2, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destroy_command, 2, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_spec, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_spec, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_definition, 4, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_definition, 4, 0, 0),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_definition, 5, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_definition, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_priority_value, 3, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority_value, 3, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_spec, 2, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chain_type, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [536] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hook_type, 1, 0, 0),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nftables(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
