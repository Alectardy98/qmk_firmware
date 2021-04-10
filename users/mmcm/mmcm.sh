#!/bin/bash

make kbdfans/kbd75:mmcm SILENT=true &&
make converter/numeric_keypad_IIe:mmcm SILENT=true &&
make nmb_111262 SILENT=true &&
make converter/apple_lisa SILENT=true &&
make converter/amtelco_kb163 SILENT=true &&
make converter/hp_2645a SILENT=true &&
make alpha:mmcm SILENT=true &&
make ivy:mmcm SILENT=true &&
make converter/vt100 SILENT=true &&
make paladinpad:mmcm SILENT=true &&
make converter/k1780 SILENT=true &&
make handwired/onekey:mmcm SILENT=true &&
make converter/convergent SILENT=true &&
make converter/micro_switch_sc_37225 SILENT=true &&
make converter/lk201 SILENT=true &&
make converter/tandy_1000 SILENT=true &&
make converter/hp_hil SILENT=true &&
make converter/z29 SILENT=true &&
make converter/cherry_4060_a SILENT=true &&
make converter/pericom SILENT=true &&
make converter/vt50 SILENT=true &&
make omron_turbo SILENT=true &&
make converter/nec_apc_h25 SILENT=true &&
make converter/atari/cx50 SILENT=true &&
make converter/atari/cx85 SILENT=true &&
make converter/standard_IIe_tender_keypad SILENT=true &&
make converter/cortron_55_500215 SILENT=true &&
make converter/ampex_219 SILENT=true &&
make converter/ctm SILENT=true &&
make converter/mitsumi_one_wire_keypad/compaq_2697 SILENT=true &&
make converter/mitsumi_one_wire_keypad/toshiba_pa7354e SILENT=true &&
make converter/alps_kpx_17 SILENT=true &&
make converter/tektronix_4120 SILENT=true &&
make converter/alphameric SILENT=true &&
make converter/ps2_serial_mouse SILENT=true &&
make converter/hp_262x SILENT=true &&
make converter/sun_usb/type5:mmcm SILENT=true &&
make converter/geac SILENT=true &&
make converter/sgi SILENT=true &&
make preonic/rev3:mmcm SILENT=true &&
make converter/micro_switch_sn_5 SILENT=true &&
make converter/hp_46010a SILENT=true &&
make illuminati/is0:mmcm SILENT=true &&
make boardsource/3x4:mmcm SILENT=true &&
make 1upkeyboards/sweet16/v1/proton_c:mmcm SILENT=true &&
make keyhive/maypad:mmcm SILENT=true &&
make converter/nmb_tvi SILENT=true &&
make converter/dg_6246a SILENT=true &&
make converter/micro_switch_sd_16604 SILENT=true
