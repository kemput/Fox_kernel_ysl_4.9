/*
 * Author: andip71, 01.09.2017
 *
 * Version 1.1.0
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define BOEFFLA_WL_BLOCKER_VERSION	"1.1.0"

#define LIST_WL_DEFAULT			"IPA_WS;NETLINK;netmgr_wl;qcom_rx_wakelock;[timerfd];wcnss_filter_lock;wlan;wlan_extscan_wl;wlan_ipa;wlan_pno_wl;wlan_wow_wl"
#define LIST_WL_DEFAULT				"qcom_rx_wakelock;wlan;wlan_wow_wl;wlan_extscan_wl;netmgr_wl;NETLINK;IPA_WS;[timerfd];wlan_ipa;wlan_pno_wl;wcnss_filter_lock;IPCRTR_lpass_rx;hal_bluetooth_lock"
#define LENGTH_LIST_WL			255
#define LENGTH_LIST_WL_DEFAULT		158
#define LIST_WL_DEFAULT			"IPA_RM12;IPA_WS;NETLINK;[timerfd];wcnss_filter_lock;radio-interface;qcril;cne_voice_ind_handler_wl_;qcom_rx_wakelock;wlan;wlan_wow_wl;wlan_extscan_wl;netmgr_wl;898000.qcom,qup_uart;wlan_ipa;wlan_pno_wl;wcnss_filter_lock;hal_bluetooth_lock;c440000.qcom,spmi:qcom,pmi8998@2:qcom,qpnp-smb2"

#define LENGTH_LIST_WL			255
#define LENGTH_LIST_WL_DEFAULT		202
#define LENGTH_LIST_WL_SEARCH		LENGTH_LIST_WL + LENGTH_LIST_WL_DEFAULT + 5
