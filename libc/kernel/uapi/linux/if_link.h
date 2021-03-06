/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_IF_LINK_H
#define _UAPI_LINUX_IF_LINK_H
#include <linux/types.h>
#include <linux/netlink.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rtnl_link_stats {
 __u32 rx_packets;
 __u32 tx_packets;
 __u32 rx_bytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 tx_bytes;
 __u32 rx_errors;
 __u32 tx_errors;
 __u32 rx_dropped;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 tx_dropped;
 __u32 multicast;
 __u32 collisions;
 __u32 rx_length_errors;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rx_over_errors;
 __u32 rx_crc_errors;
 __u32 rx_frame_errors;
 __u32 rx_fifo_errors;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rx_missed_errors;
 __u32 tx_aborted_errors;
 __u32 tx_carrier_errors;
 __u32 tx_fifo_errors;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 tx_heartbeat_errors;
 __u32 tx_window_errors;
 __u32 rx_compressed;
 __u32 tx_compressed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rtnl_link_stats64 {
 __u64 rx_packets;
 __u64 tx_packets;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 rx_bytes;
 __u64 tx_bytes;
 __u64 rx_errors;
 __u64 tx_errors;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 rx_dropped;
 __u64 tx_dropped;
 __u64 multicast;
 __u64 collisions;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 rx_length_errors;
 __u64 rx_over_errors;
 __u64 rx_crc_errors;
 __u64 rx_frame_errors;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 rx_fifo_errors;
 __u64 rx_missed_errors;
 __u64 tx_aborted_errors;
 __u64 tx_carrier_errors;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 tx_fifo_errors;
 __u64 tx_heartbeat_errors;
 __u64 tx_window_errors;
 __u64 rx_compressed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 tx_compressed;
};
struct rtnl_link_ifmap {
 __u64 mem_start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 mem_end;
 __u64 base_addr;
 __u16 irq;
 __u8 dma;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 port;
};
enum {
 IFLA_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_ADDRESS,
 IFLA_BROADCAST,
 IFLA_IFNAME,
 IFLA_MTU,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_LINK,
 IFLA_QDISC,
 IFLA_STATS,
 IFLA_COST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IFLA_COST IFLA_COST
 IFLA_PRIORITY,
#define IFLA_PRIORITY IFLA_PRIORITY
 IFLA_MASTER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IFLA_MASTER IFLA_MASTER
 IFLA_WIRELESS,
#define IFLA_WIRELESS IFLA_WIRELESS
 IFLA_PROTINFO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IFLA_PROTINFO IFLA_PROTINFO
 IFLA_TXQLEN,
#define IFLA_TXQLEN IFLA_TXQLEN
 IFLA_MAP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IFLA_MAP IFLA_MAP
 IFLA_WEIGHT,
#define IFLA_WEIGHT IFLA_WEIGHT
 IFLA_OPERSTATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_LINKMODE,
 IFLA_LINKINFO,
#define IFLA_LINKINFO IFLA_LINKINFO
 IFLA_NET_NS_PID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_IFALIAS,
 IFLA_NUM_VF,
 IFLA_VFINFO_LIST,
 IFLA_STATS64,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VF_PORTS,
 IFLA_PORT_SELF,
 IFLA_AF_SPEC,
 IFLA_GROUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_NET_NS_FD,
 IFLA_EXT_MASK,
 IFLA_PROMISCUITY,
#define IFLA_PROMISCUITY IFLA_PROMISCUITY
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_NUM_TX_QUEUES,
 IFLA_NUM_RX_QUEUES,
 IFLA_CARRIER,
 __IFLA_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IFLA_MAX (__IFLA_MAX - 1)
#define IFLA_RTA(r) ((struct rtattr*)(((char*)(r)) + NLMSG_ALIGN(sizeof(struct ifinfomsg))))
#define IFLA_PAYLOAD(n) NLMSG_PAYLOAD(n,sizeof(struct ifinfomsg))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 IFLA_INET_UNSPEC,
 IFLA_INET_CONF,
 __IFLA_INET_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IFLA_INET_MAX (__IFLA_INET_MAX - 1)
enum {
 IFLA_INET6_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_INET6_FLAGS,
 IFLA_INET6_CONF,
 IFLA_INET6_STATS,
 IFLA_INET6_MCAST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_INET6_CACHEINFO,
 IFLA_INET6_ICMP6STATS,
 IFLA_INET6_TOKEN,
 __IFLA_INET6_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IFLA_INET6_MAX (__IFLA_INET6_MAX - 1)
enum {
 BRIDGE_MODE_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BRIDGE_MODE_HAIRPIN,
};
enum {
 IFLA_BRPORT_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_BRPORT_STATE,
 IFLA_BRPORT_PRIORITY,
 IFLA_BRPORT_COST,
 IFLA_BRPORT_MODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_BRPORT_GUARD,
 IFLA_BRPORT_PROTECT,
 IFLA_BRPORT_FAST_LEAVE,
 __IFLA_BRPORT_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IFLA_BRPORT_MAX (__IFLA_BRPORT_MAX - 1)
struct ifla_cacheinfo {
 __u32 max_reasm_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 tstamp;
 __u32 reachable_time;
 __u32 retrans_time;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 IFLA_INFO_UNSPEC,
 IFLA_INFO_KIND,
 IFLA_INFO_DATA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_INFO_XSTATS,
 __IFLA_INFO_MAX,
};
#define IFLA_INFO_MAX (__IFLA_INFO_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 IFLA_VLAN_UNSPEC,
 IFLA_VLAN_ID,
 IFLA_VLAN_FLAGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VLAN_EGRESS_QOS,
 IFLA_VLAN_INGRESS_QOS,
 IFLA_VLAN_PROTOCOL,
 __IFLA_VLAN_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IFLA_VLAN_MAX (__IFLA_VLAN_MAX - 1)
struct ifla_vlan_flags {
 __u32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 mask;
};
enum {
 IFLA_VLAN_QOS_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VLAN_QOS_MAPPING,
 __IFLA_VLAN_QOS_MAX
};
#define IFLA_VLAN_QOS_MAX (__IFLA_VLAN_QOS_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ifla_vlan_qos_mapping {
 __u32 from;
 __u32 to;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 IFLA_MACVLAN_UNSPEC,
 IFLA_MACVLAN_MODE,
 IFLA_MACVLAN_FLAGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __IFLA_MACVLAN_MAX,
};
#define IFLA_MACVLAN_MAX (__IFLA_MACVLAN_MAX - 1)
enum macvlan_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MACVLAN_MODE_PRIVATE = 1,
 MACVLAN_MODE_VEPA = 2,
 MACVLAN_MODE_BRIDGE = 4,
 MACVLAN_MODE_PASSTHRU = 8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MACVLAN_FLAG_NOPROMISC 1
enum {
 IFLA_VXLAN_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VXLAN_ID,
 IFLA_VXLAN_GROUP,
 IFLA_VXLAN_LINK,
 IFLA_VXLAN_LOCAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VXLAN_TTL,
 IFLA_VXLAN_TOS,
 IFLA_VXLAN_LEARNING,
 IFLA_VXLAN_AGEING,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VXLAN_LIMIT,
 IFLA_VXLAN_PORT_RANGE,
 IFLA_VXLAN_PROXY,
 IFLA_VXLAN_RSC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VXLAN_L2MISS,
 IFLA_VXLAN_L3MISS,
 IFLA_VXLAN_PORT,
 __IFLA_VXLAN_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IFLA_VXLAN_MAX (__IFLA_VXLAN_MAX - 1)
struct ifla_vxlan_port_range {
 __be16 low;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 high;
};
enum {
 IFLA_VF_INFO_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VF_INFO,
 __IFLA_VF_INFO_MAX,
};
#define IFLA_VF_INFO_MAX (__IFLA_VF_INFO_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 IFLA_VF_UNSPEC,
 IFLA_VF_MAC,
 IFLA_VF_VLAN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VF_TX_RATE,
 IFLA_VF_SPOOFCHK,
 __IFLA_VF_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IFLA_VF_MAX (__IFLA_VF_MAX - 1)
struct ifla_vf_mac {
 __u32 vf;
 __u8 mac[32];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ifla_vf_vlan {
 __u32 vf;
 __u32 vlan;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 qos;
};
struct ifla_vf_tx_rate {
 __u32 vf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 rate;
};
struct ifla_vf_spoofchk {
 __u32 vf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 setting;
};
enum {
 IFLA_VF_PORT_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_VF_PORT,
 __IFLA_VF_PORT_MAX,
};
#define IFLA_VF_PORT_MAX (__IFLA_VF_PORT_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 IFLA_PORT_UNSPEC,
 IFLA_PORT_VF,
 IFLA_PORT_PROFILE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_PORT_VSI_TYPE,
 IFLA_PORT_INSTANCE_UUID,
 IFLA_PORT_HOST_UUID,
 IFLA_PORT_REQUEST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_PORT_RESPONSE,
 __IFLA_PORT_MAX,
};
#define IFLA_PORT_MAX (__IFLA_PORT_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PORT_PROFILE_MAX 40
#define PORT_UUID_MAX 16
#define PORT_SELF_VF -1
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PORT_REQUEST_PREASSOCIATE = 0,
 PORT_REQUEST_PREASSOCIATE_RR,
 PORT_REQUEST_ASSOCIATE,
 PORT_REQUEST_DISASSOCIATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 PORT_VDP_RESPONSE_SUCCESS = 0,
 PORT_VDP_RESPONSE_INVALID_FORMAT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PORT_VDP_RESPONSE_INSUFFICIENT_RESOURCES,
 PORT_VDP_RESPONSE_UNUSED_VTID,
 PORT_VDP_RESPONSE_VTID_VIOLATION,
 PORT_VDP_RESPONSE_VTID_VERSION_VIOALTION,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PORT_VDP_RESPONSE_OUT_OF_SYNC,
 PORT_PROFILE_RESPONSE_SUCCESS = 0x100,
 PORT_PROFILE_RESPONSE_INPROGRESS,
 PORT_PROFILE_RESPONSE_INVALID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PORT_PROFILE_RESPONSE_BADSTATE,
 PORT_PROFILE_RESPONSE_INSUFFICIENT_RESOURCES,
 PORT_PROFILE_RESPONSE_ERROR,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ifla_port_vsi {
 __u8 vsi_mgr_id;
 __u8 vsi_type_id[3];
 __u8 vsi_type_version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pad[3];
};
enum {
 IFLA_IPOIB_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IFLA_IPOIB_PKEY,
 IFLA_IPOIB_MODE,
 IFLA_IPOIB_UMCAST,
 __IFLA_IPOIB_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 IPOIB_MODE_DATAGRAM = 0,
 IPOIB_MODE_CONNECTED = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IFLA_IPOIB_MAX (__IFLA_IPOIB_MAX - 1)
#endif
