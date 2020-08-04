/*
 * Copyright (c) 2010-2015, NVIDIA CORPORATION.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#ifndef _TEGRA210_FLOW_H_
#define _TEGRA210_FLOW_H_

#include "types.h"

struct flow_ctlr {
	vu32 halt_cpu_events;	/* offset 0x00 */
	vu32 halt_cop_events;	/* offset 0x04 */
	vu32 cpu_csr;		    /* offset 0x08 */
	vu32 cop_csr;		    /* offset 0x0c */
	vu32 xrq_events;		/* offset 0x10 */
	vu32 halt_cpu1_events;	/* offset 0x14 */
	vu32 cpu1_csr;		    /* offset 0x18 */
	vu32 halt_cpu2_events;	/* offset 0x1c */
	vu32 cpu2_csr;		    /* offset 0x20 */
	vu32 halt_cpu3_events;	/* offset 0x24 */
	vu32 cpu3_csr;		    /* offset 0x28 */
	vu32 cluster_control;	/* offset 0x2c */
	vu32 halt_cop1_events;	/* offset 0x30 */
	vu32 halt_cop1_csr;	    /* offset 0x34 */
	vu32 cpu_pwr_csr;	    /* offset 0x38 */
	vu32 mpid;		        /* offset 0x3c */
	vu32 ram_repair;		/* offset 0x40 */
	vu32 flow_dbg_sel;	    /* offset 0x44 */
	vu32 flow_dbg_cnt0;	    /* offset 0x48 */
	vu32 flow_dbg_cnt1;	    /* offset 0x4c */
	vu32 flow_dbg_qual;	    /* offset 0x50 */
	vu32 flow_ctlr_spare;	/* offset 0x54 */
	vu32 reserved;		    /* offset 0x58 */
	vu32 fc_seq_intercept;	/* offset 0x5c */
};

enum {
	FLOW_MODE_SHIFT = 29,
	FLOW_MODE_MASK = 0x7 << FLOW_MODE_SHIFT,

	FLOW_MODE_NONE = 0 << FLOW_MODE_SHIFT,
	FLOW_MODE_RUN_AND_INT = 1 << FLOW_MODE_SHIFT,
	FLOW_MODE_WAITEVENT = 2 << FLOW_MODE_SHIFT,
	FLOW_MODE_WAITEVENT_AND_INT = 3 << FLOW_MODE_SHIFT,
	FLOW_MODE_STOP_UNTIL_IRQ = 4 << FLOW_MODE_SHIFT,
	FLOW_MODE_STOP_UNTIL_IRQ_AND_INT = 5 << FLOW_MODE_SHIFT,
	FLOW_MODE_STOP_UNTIL_EVENT_AND_IRQ = 6 << FLOW_MODE_SHIFT,
};

/* HALT_COP_EVENTS_0, 0x04 */
enum {
	FLOW_EVENT_GIC_FIQ = 1 << 8,
	FLOW_EVENT_GIC_IRQ = 1 << 9,
	FLOW_EVENT_LIC_FIQ = 1 << 10,
	FLOW_EVENT_LIC_IRQ = 1 << 11,
	FLOW_EVENT_IBF = 1 << 12,
	FLOW_EVENT_IBE = 1 << 13,
	FLOW_EVENT_OBF = 1 << 14,
	FLOW_EVENT_OBE = 1 << 15,
	FLOW_EVENT_XRQ_A = 1 << 16,
	FLOW_EVENT_XRQ_B = 1 << 17,
	FLOW_EVENT_XRQ_C = 1 << 18,
	FLOW_EVENT_XRQ_D = 1 << 19,
	FLOW_EVENT_SMP30 = 1 << 20,
	FLOW_EVENT_SMP31 = 1 << 21,
	FLOW_EVENT_X_RDY = 1 << 22,
	FLOW_EVENT_SEC = 1 << 23,
	FLOW_EVENT_MSEC = 1 << 24,
	FLOW_EVENT_USEC = 1 << 25,
	FLOW_EVENT_X32K = 1 << 26,
	FLOW_EVENT_SCLK = 1 << 27,
	FLOW_EVENT_JTAG = 1 << 28
};

#endif	/*  _TEGRA210_FLOW_H_ */
