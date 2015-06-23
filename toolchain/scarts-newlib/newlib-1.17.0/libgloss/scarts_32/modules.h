/* Register-to-memory mappings for SCARTS (32-bit).
 * Copyright (C) 2010, 2011 Embedded Computing Systems Group,
 * Department of Computer Engineering, Vienna University of Technology.
 * Contributed by Martin Walter <mwalter@opencores.org>
 *
 * The authors hereby grant permission to use, copy, modify, distribute,
 * and license this software and its documentation for any purpose, provided
 * that existing copyright notices are retained in all copies and that this
 * notice is included verbatim in any distributions. No written agreement,
 * license, or royalty fee is required for any of the authorized uses.
 * Modifications to this software may be copyrighted by their authors
 * and need not follow the licensing terms described here, provided that
 * the new terms are clearly indicated on the first page of each file where
 * they apply.
 */

#ifndef __SCARTS_32_MODULES_H__
#define __SCARTS_32_MODULES_H__

#include <stdint.h>

/* Processor Control Module register definitions */
#define PROC_CTRL_SIZE			25
#define PROC_CTRL_BADDR			((uint32_t)-32)

#define PROC_CTRL_STATUS_BOFF		0
#define PROC_CTRL_STATUS_BADDR		PROC_CTRL_BADDR + PROC_CTRL_STATUS_BOFF
#define PROC_CTRL_STATUS		(*(volatile uint8_t *const) (PROC_CTRL_STATUS_BADDR))
#define PROC_CTRL_STATUS_LOOR		0x7
#define PROC_CTRL_STATUS_FSS		0x4
#define PROC_CTRL_STATUS_BUSY		0x3
#define PROC_CTRL_STATUS_ERR		0x2
#define PROC_CTRL_STATUS_RDY		0x1
#define PROC_CTRL_STATUS_INT		0x0

#define PROC_CTRL_STATUS_C_BOFF		1
#define PROC_CTRL_STATUS_C_BADDR	PROC_CTRL_BADDR + PROC_CTRL_STATUS_C_BOFF
#define PROC_CTRL_STATUS_C		(*(volatile uint8_t *const) (PROC_CTRL_STATUS_C_BADDR))
#define PROC_CTRL_STATUS_C_COND		0x5
#define PROC_CTRL_STATUS_C_ZERO		0x4
#define PROC_CTRL_STATUS_C_NEG		0x3
#define PROC_CTRL_STATUS_C_CARRY	0x2
#define PROC_CTRL_STATUS_C_OVER		0x1

#define PROC_CTRL_CONFIG_BOFF		2
#define PROC_CTRL_CONFIG_BADDR		PROC_CTRL_BADDR + PROC_CTRL_CONFIG_BOFF
#define PROC_CTRL_CONFIG		(*(volatile uint8_t  *const) (PROC_CTRL_CONFIG_BADDR))
#define PROC_CTRL_CONFIG_LOOW		0x7
#define PROC_CTRL_CONFIG_EFSS		0x4
#define PROC_CTRL_CONFIG_OUTD		0x3
#define PROC_CTRL_CONFIG_SRES		0x2
#define PROC_CTRL_CONFIG_ID		0x1
#define PROC_CTRL_CONFIG_INTA		0x0

#define PROC_CTRL_CONFIG_C_BOFF 	3
#define PROC_CTRL_CONFIG_C_BADDR	PROC_CTRL_BADDR + PROC_CTRL_CONFIG_C_BOFF
#define PROC_CTRL_CONFIG_C		(*(volatile uint8_t  *const) (PROC_CTRL_CONFIG_C_BADDR))
#define PROC_CTRL_CONFIG_C_GIE		0x7
#define PROC_CTRL_CONFIG_C_SLEEP	0x6

#define PROC_CTRL_INTPROT_BOFF		4
#define PROC_CTRL_INTPROT_BADDR		PROC_CTRL_BADDR + PROC_CTRL_INTPROT_BOFF
#define PROC_CTRL_INTPROT		(*(volatile uint16_t *const) (PROC_CTRL_INTPROT_BADDR))

#define PROC_CTRL_INTMASK_BOFF		6
#define PROC_CTRL_INTMASK_BADDR		PROC_CTRL_BADDR + PROC_CTRL_INTMASK_BOFF
#define PROC_CTRL_INTMASK		(*(volatile uint16_t *const) (PROC_CTRL_INTMASK_BADDR))

#define PROC_CTRL_FPW_BOFF		8
#define PROC_CTRL_FPW_BADDR		PROC_CTRL_BADDR + PROC_CTRL_FPW_BOFF
#define PROC_CTRL_FPW			(*(volatile uint32_t *const) (PROC_CTRL_FPW_BADDR))
#define FPW				PROC_CTRL_FPW

#define PROC_CTRL_FPX_BOFF		12
#define PROC_CTRL_FPX_BADDR		PROC_CTRL_BADDR + PROC_CTRL_FPX_BOFF
#define PROC_CTRL_FPX			(*(volatile uint32_t *const) (PROC_CTRL_FPX_BADDR))
#define FPX				PROC_CTRL_FPX

#define PROC_CTRL_FPY_BOFF		16
#define PROC_CTRL_FPY_BADDR		PROC_CTRL_BADDR + PROC_CTRL_FPY_BOFF
#define PROC_CTRL_FPY			(*(volatile uint32_t *const) (PROC_CTRL_FPY_BADDR))
#define FPY				PROC_CTRL_FPY

#define PROC_CTRL_FPZ_BOFF		20
#define PROC_CTRL_FPZ_BADDR		PROC_CTRL_BADDR + PROC_CTRL_FPZ_BOFF
#define PROC_CTRL_FPZ			(*(volatile uint32_t *const) (PROC_CTRL_FPZ_BADDR))
#define FPZ				PROC_CTRL_FPZ

#define PROC_CTRL_SAVE_STATUS_C_BOFF	24
#define PROC_CTRL_SAVE_STATUS_C_BADDR	PROC_CTRL_BADDR + PROC_CTRL_SAVE_STATUS_C_BOFF
#define PROC_CTRL_SAVE_STATUS_C		(*(volatile uint8_t *const) (PROC_CTRL_SAVE_STATUS_C_BADDR))
#define PROC_CTRL_SAVE_STATUS_C_COND	0x5
#define PROC_CTRL_SAVE_STATUS_C_ZERO	0x4
#define PROC_CTRL_SAVE_STATUS_C_NEG	0x3
#define PROC_CTRL_SAVE_STATUS_C_CARRY	0x2
#define PROC_CTRL_SAVE_STATUS_C_OVER	0x1

/* Programmer Module register definitions */
#define PROGRAMMER_SIZE			10
#define PROGRAMMER_BADDR		((uint32_t)-64)

#define PROGRAMMER_STATUS_BOFF		0
#define PROGRAMMER_STATUS_BADDR		PROGRAMMER_BADDR + PROGRAMMER_STATUS_BOFF
#define PROGRAMMER_STATUS		(*(volatile uint8_t  *const) (PROGRAMMER_STATUS_BADDR))
#define PROGRAMMER_STATUS_LOOR		0x7
#define PROGRAMMER_STATUS_FSS		0x4
#define PROGRAMMER_STATUS_BUSY		0x3
#define PROGRAMMER_STATUS_ERR		0x2
#define PROGRAMMER_STATUS_RDY		0x1
#define PROGRAMMER_STATUS_INT		0x0

#define PROGRAMMER_CONFIG_BOFF		2
#define PROGRAMMER_CONFIG_BADDR		PROGRAMMER_BADDR + PROGRAMMER_CONFIG_BOFF
#define PROGRAMMER_CONFIG		(*(volatile uint8_t  *const) (PROGRAMMER_CONFIG_BADDR))
#define PROGRAMMER_CONFIG_LOOW		0x7
#define PROGRAMMER_CONFIG_EFSS		0x4
#define PROGRAMMER_CONFIG_OUTD		0x3
#define PROGRAMMER_CONFIG_SRES		0x2
#define PROGRAMMER_CONFIG_ID		0x1
#define PROGRAMMER_CONFIG_INTA		0x0

#define PROGRAMMER_CONFIG_C_BOFF	3
#define PROGRAMMER_CONFIG_C_BADDR	PROGRAMMER_BADDR + PROGRAMMER_CONFIG_C_BOFF
#define PROGRAMMER_CONFIG_C		(*(volatile uint8_t  *const) (PROGRAMMER_CONFIG_C_BADDR))
#define PROGRAMMER_CONFIG_C_PREXE	0x7
#define PROGRAMMER_CONFIG_C_MEM		0x6
#define PROGRAMMER_CONFIG_C_CLR		0x1
#define PROGRAMMER_CONFIG_C_SRC		0x0

#define PROGRAMMER_ADDRESS_BOFF		4
#define PROGRAMMER_ADDRESS_BADDR	PROGRAMMER_BADDR + PROGRAMMER_ADDRESS_BOFF
#define PROGRAMMER_ADDRESS		(*(volatile uint32_t *const) (PROGRAMMER_ADDRESS_BADDR))

#define PROGRAMMER_DATA_BOFF		8
#define PROGRAMMER_DATA_BADDR		PROGRAMMER_BADDR + PROGRAMMER_DATA_BOFF
#define PROGRAMMER_DATA			(*(volatile uint16_t *const) (PROGRAMMER_DATA_BADDR))

/* miniUART Module register definitions */
#define MINI_UART_SIZE			10
#define MINI_UART_BADDR			((uint32_t)-128)

#define MINI_UART_STATUS_BOFF		0
#define MINI_UART_STATUS_BADDR		MINI_UART_BADDR + MINI_UART_STATUS_BOFF
#define MINI_UART_STATUS		(*(volatile uint8_t *const) (MINI_UART_STATUS_BADDR))
#define MINI_UART_STATUS_LOOR		0x7
#define MINI_UART_STATUS_FSS		0x4
#define MINI_UART_STATUS_BUSY		0x3
#define MINI_UART_STATUS_ERR		0x2
#define MINI_UART_STATUS_RDY		0x1
#define MINI_UART_STATUS_INT		0x0

#define MINI_UART_STATUS_C_BOFF		1
#define MINI_UART_STATUS_C_BADDR	MINI_UART_BADDR + MINI_UART_STATUS_C_BOFF
#define MINI_UART_STATUS_C		(*(volatile uint8_t *const) (MINI_UART_STATUS_C_BADDR))
#define MINI_UART_STATUS_C_FE		0x6
#define MINI_UART_STATUS_C_PE		0x5
#define MINI_UART_STATUS_C_EF		0x4
#define MINI_UART_STATUS_C_OV		0x3
#define MINI_UART_STATUS_C_RBR		0x2
#define MINI_UART_STATUS_C_TBR		0x1

#define MINI_UART_CONFIG_BOFF		2
#define MINI_UART_CONFIG_BADDR		MINI_UART_BADDR + MINI_UART_CONFIG_BOFF
#define MINI_UART_CONFIG		(*(volatile uint8_t *const) (MINI_UART_CONFIG_BADDR))
#define MINI_UART_CONFIG_LOOW		0x7
#define MINI_UART_CONFIG_EFSS		0x4
#define MINI_UART_CONFIG_OUTD		0x3
#define MINI_UART_CONFIG_SRES		0x2
#define MINI_UART_CONFIG_ID		0x1
#define MINI_UART_CONFIG_INTA		0x0

#define MINI_UART_CFG_BOFF		3
#define MINI_UART_CFG_BADDR		MINI_UART_BADDR + MINI_UART_CFG_BOFF
#define MINI_UART_CFG			(*(volatile uint8_t *const) (MINI_UART_CFG_BADDR))
#define MINI_UART_CFG_PARENA		0x7
#define MINI_UART_CFG_ODD		0x6
#define MINI_UART_CFG_STOP		0x5
#define MINI_UART_CFG_TRCTRL		0x4
#define MINI_UART_CFG_MSGLEN_3		0x3
#define MINI_UART_CFG_MSGLEN_2		0x2
#define MINI_UART_CFG_MSGLEN_1		0x1
#define MINI_UART_CFG_MSGLEN_0		0x0

#define MINI_UART_CMD_BOFF		8
#define MINI_UART_CMD_BADDR		MINI_UART_BADDR + MINI_UART_CMD_BOFF
#define MINI_UART_CMD			(*(volatile uint8_t *const) (MINI_UART_CMD_BADDR))
#define MINI_UART_CMD_ERRI		0x7
#define MINI_UART_CMD_EI		0x6
#define MINI_UART_CMD_AA_2		0x5
#define MINI_UART_CMD_AA_1		0x4
#define MINI_UART_CMD_AA_0		0x3
#define MINI_UART_CMD_ES_1		0x2
#define MINI_UART_CMD_ES_0		0x1

#define MINI_UART_MSG_BOFF		6
#define MINI_UART_MSG_BADDR		MINI_UART_BADDR + MINI_UART_MSG_BOFF
#define MINI_UART_MSG			(*(volatile uint16_t *const) (MINI_UART_MSG_BADDR))

#define MINI_UART_UBRS_L_BOFF		4
#define MINI_UART_UBRS_L_BADDR		MINI_UART_BADDR + MINI_UART_UBRS_L_BOFF
#define MINI_UART_UBRS_L		(*(volatile uint8_t *const) (MINI_UART_UBRS_L_BADDR))

#define MINI_UART_UBRS_H_BOFF		5
#define MINI_UART_UBRS_H_BADDR		MINI_UART_BADDR + MINI_UART_UBRS_H_BOFF
#define MINI_UART_UBRS_H		(*(volatile uint8_t *const) (MINI_UART_UBRS_H_BADDR))

/* Breakpoint Module register definitions */
#define BREAKPOINT_SIZE			32
#define BREAKPOINT_BADDR		((uint32_t)-160)

#define BREAKPOINT_STATUS_BOFF		0
#define BREAKPOINT_STATUS_BADDR		BREAKPOINT_BADDR + BREAKPOINT_STATUS_BOFF
#define BREAKPOINT_STATUS		(*(volatile uint8_t *const) (BREAKPOINT_STATUS_BADDR))
#define BREAKPOINT_STATUS_LOOR		0x7
#define BREAKPOINT_STATUS_FSS		0x4
#define BREAKPOINT_STATUS_BUSY		0x3
#define BREAKPOINT_STATUS_ERR		0x2
#define BREAKPOINT_STATUS_RDY		0x1
#define BREAKPOINT_STATUS_INT		0x0

#define BREAKPOINT_STATUS_C_BOFF	1
#define BREAKPOINT_STATUS_C_BADDR	BREAKPOINT_BADDR + BREAKPOINT_STATUS_C_BOFF
#define BREAKPOINT_STATUS_C		(*(volatile uint8_t *const) (BREAKPOINT_STATUS_C_BADDR))
#define BREAKPOINT_STATUS_C_FE		0x6
#define BREAKPOINT_STATUS_C_PE		0x5
#define BREAKPOINT_STATUS_C_EF		0x4
#define BREAKPOINT_STATUS_C_OV		0x3
#define BREAKPOINT_STATUS_C_RBR		0x2
#define BREAKPOINT_STATUS_C_TBR		0x1

#define BREAKPOINT_CONFIG_BOFF		2
#define BREAKPOINT_CONFIG_BADDR		BREAKPOINT_BADDR + BREAKPOINT_CONFIG_BOFF
#define BREAKPOINT_CONFIG		(*(volatile uint8_t *const) (BREAKPOINT_CONFIG_BADDR))
#define BREAKPOINT_CONFIG_LOOW		0x7
#define BREAKPOINT_CONFIG_EFSS		0x4
#define BREAKPOINT_CONFIG_OUTD		0x3
#define BREAKPOINT_CONFIG_SRES		0x2
#define BREAKPOINT_CONFIG_ID		0x1
#define BREAKPOINT_CONFIG_INTA		0x0

#define BREAKPOINT_CONFIG_C_BOFF	3
#define BREAKPOINT_CONFIG_C_BADDR	BREAKPOINT_BADDR + BREAKPOINT_CONFIG_C_BOFF
#define BREAKPOINT_CONFIG_C		(*(volatile uint8_t *const) (BREAKPOINT_CONFIG_C_BADDR))
#define BREAKPOINT_CONFIG_C_EN		0x7
#define BREAKPOINT_CONFIG_C_STEP_CNT_3	0x6
#define BREAKPOINT_CONFIG_C_STEP_CNT_2	0x5
#define BREAKPOINT_CONFIG_C_STEP_CNT_1	0x4
#define BREAKPOINT_CONFIG_C_STEP_CNT_0	0x3
#define BREAKPOINT_CONFIG_C_BP_CNT_2	0x2
#define BREAKPOINT_CONFIG_C_BP_CNT_1	0x1
#define BREAKPOINT_CONFIG_C_BP_CNT_0	0x0

#define BREAKPOINT_BP0_BOFF		4
#define BREAKPOINT_BP0_BADDR		BREAKPOINT_BADDR + BREAKPOINT_BP0_BOFF
#define BREAKPOINT_BP0			(*(volatile uint32_t *const) (BREAKPOINT_BP0_BADDR))

#define BREAKPOINT_BP1_BOFF		8
#define BREAKPOINT_BP1_BADDR		BREAKPOINT_BADDR + BREAKPOINT_BP1_BOFF
#define BREAKPOINT_BP1			(*(volatile uint32_t *const) (BREAKPOINT_BP1_BADDR))

#define BREAKPOINT_BP2_BOFF		12
#define BREAKPOINT_BP2_BADDR		BREAKPOINT_BADDR + BREAKPOINT_BP2_BOFF
#define BREAKPOINT_BP2			(*(volatile uint32_t *const) (BREAKPOINT_BP2_BADDR))

#define BREAKPOINT_BP3_BOFF		16
#define BREAKPOINT_BP3_BADDR		BREAKPOINT_BADDR + BREAKPOINT_BP3_BOFF
#define BREAKPOINT_BP3			(*(volatile uint32_t *const) (BREAKPOINT_BP3_BADDR))

#define BREAKPOINT_BP4_BOFF		20
#define BREAKPOINT_BP4_BADDR		BREAKPOINT_BADDR + BREAKPOINT_BP4_BOFF
#define BREAKPOINT_BP4			(*(volatile uint32_t *const) (BREAKPOINT_BP4_BADDR))

#define BREAKPOINT_BP5_BOFF		24
#define BREAKPOINT_BP5_BADDR		BREAKPOINT_BADDR + BREAKPOINT_BP5_BOFF
#define BREAKPOINT_BP5			(*(volatile uint32_t *const) (BREAKPOINT_BP5_BADDR))

#define BREAKPOINT_BP6_BOFF		28
#define BREAKPOINT_BP6_BADDR		BREAKPOINT_BADDR + BREAKPOINT_BP6_BOFF
#define BREAKPOINT_BP6			(*(volatile uint32_t *const) (BREAKPOINT_BP6_BADDR))

/* Watchpoint Module register definitions */
#define WATCHPOINT_SIZE                 32
#define WATCHPOINT_BADDR                ((uint32_t)-192)

#define WATCHPOINT_STATUS_BOFF          0
#define WATCHPOINT_STATUS_BADDR         WATCHPOINT_BADDR + WATCHPOINT_STATUS_BOFF
#define WATCHPOINT_STATUS               (*(volatile uint8_t  *const) (WATCHPOINT_STATUS_BADDR))
#define WATCHPOINT_STATUS_LOOR          0x7
#define WATCHPOINT_STATUS_FSS           0x4
#define WATCHPOINT_STATUS_BUSY          0x3
#define WATCHPOINT_STATUS_ERR           0x2
#define WATCHPOINT_STATUS_RDY           0x1
#define WATCHPOINT_STATUS_INT           0x0

#define WATCHPOINT_STATUS_C_BOFF        1
#define WATCHPOINT_STATUS_C_BADDR       WATCHPOINT_BADDR + WATCHPOINT_STATUS_C_BOFF
#define WATCHPOINT_STATUS_C             (*(volatile uint8_t  *const) (WATCHPOINT_STATUS_C_BADDR))
#define WATCHPOINT_STATUS_C_FE          0x6
#define WATCHPOINT_STATUS_C_PE          0x5
#define WATCHPOINT_STATUS_C_EF          0x4
#define WATCHPOINT_STATUS_C_OV          0x3
#define WATCHPOINT_STATUS_C_RBR         0x2
#define WATCHPOINT_STATUS_C_TBR         0x1

#define WATCHPOINT_CONFIG_BOFF          2
#define WATCHPOINT_CONFIG_BADDR         WATCHPOINT_BADDR + WATCHPOINT_CONFIG_BOFF
#define WATCHPOINT_CONFIG               (*(volatile uint8_t  *const) (WATCHPOINT_CONFIG_BADDR))
#define WATCHPOINT_CONFIG_LOOW          0x7
#define WATCHPOINT_CONFIG_EFSS          0x4
#define WATCHPOINT_CONFIG_OUTD          0x3
#define WATCHPOINT_CONFIG_SRES          0x2
#define WATCHPOINT_CONFIG_ID            0x1
#define WATCHPOINT_CONFIG_INTA          0x0

#define WATCHPOINT_CONFIG_C_BOFF        3
#define WATCHPOINT_CONFIG_C_BADDR       WATCHPOINT_BADDR + WATCHPOINT_CONFIG_C_BOFF
#define WATCHPOINT_CONFIG_C             (*(volatile uint8_t  *const) (WATCHPOINT_CONFIG_C_BADDR))
#define WATCHPOINT_CONFIG_C_WRITE_2	0x5
#define WATCHPOINT_CONFIG_C_READ_2	0x4
#define WATCHPOINT_CONFIG_C_WRITE_1	0x3
#define WATCHPOINT_CONFIG_C_READ_1	0x2
#define WATCHPOINT_CONFIG_C_WRITE_0	0x1
#define WATCHPOINT_CONFIG_C_READ_0	0x0

#define WATCHPOINT_ACCESS_ADDR_BOFF     4
#define WATCHPOINT_ACCESS_ADDR_BADDR    WATCHPOINT_BADDR + WATCHPOINT_ACCESS_ADDR_BOFF
#define WATCHPOINT_ACCESS_ADDR          (*(volatile uint32_t *const) (WATCHPOINT_ACCESS_ADDR_BADDR))

#define WATCHPOINT_ADDR0_BOFF           8
#define WATCHPOINT_ADDR0_BADDR          WATCHPOINT_BADDR + WATCHPOINT_ADDR0_BOFF
#define WATCHPOINT_ADDR0                (*(volatile uint32_t *const) (WATCHPOINT_ADDR0_BADDR))

#define WATCHPOINT_MASK0_BOFF           12
#define WATCHPOINT_MASK0_BADDR          WATCHPOINT_BADDR + WATCHPOINT_MASK0_BOFF
#define WATCHPOINT_MASK0                (*(volatile uint32_t *const) (WATCHPOINT_MASK0_BADDR))

#define WATCHPOINT_ADDR1_BOFF           16
#define WATCHPOINT_ADDR1_BADDR          WATCHPOINT_BADDR + WATCHPOINT_ADDR1_BOFF
#define WATCHPOINT_ADDR1                (*(volatile uint32_t *const) (WATCHPOINT_ADDR1_BADDR))

#define WATCHPOINT_MASK1_BOFF           20
#define WATCHPOINT_MASK1_BADDR          WATCHPOINT_BADDR + WATCHPOINT_MASK1_BOFF
#define WATCHPOINT_MASK1                (*(volatile uint32_t *const) (WATCHPOINT_MASK1_BADDR))

#define WATCHPOINT_ADDR2_BOFF           24
#define WATCHPOINT_ADDR2_BADDR          WATCHPOINT_BADDR + WATCHPOINT_ADDR2_BOFF
#define WATCHPOINT_ADDR2                (*(volatile uint32_t *const) (WATCHPOINT_ADDR2_BADDR))

#define WATCHPOINT_MASK2_BOFF           28
#define WATCHPOINT_MASK2_BADDR          WATCHPOINT_BADDR + WATCHPOINT_MASK2_BOFF
#define WATCHPOINT_MASK2                (*(volatile uint32_t *const) (WATCHPOINT_MASK2_BADDR))

/* 7-segment Display Module register definitions */
#define DISP7SEG_SIZE			8
#define DISP7SEG_BADDR			((uint32_t)-288)

#define DISP7SEG_STATUS_BOFF		0
#define DISP7SEG_STATUS_BADDR		DISP7SEG_BADDR + DISP7SEG_STATUS_BOFF
#define DISP7SEG_STATUS			(*(volatile uint8_t *const) (DISP7SEG_STATUS_BADDR))
#define DISP7SEG_STATUS_LOOR		0x7
#define DISP7SEG_STATUS_FSS		0x4
#define DISP7SEG_STATUS_BUSY		0x3
#define DISP7SEG_STATUS_ERR		0x2
#define DISP7SEG_STATUS_RDY		0x1
#define DISP7SEG_STATUS_INT		0x0

#define DISP7SEG_CONFIG_BOFF		2
#define DISP7SEG_CONFIG_BADDR		DISP7SEG_BADDR + DISP7SEG_CONFIG_BOFF
#define DISP7SEG_CONFIG			(*(volatile uint8_t *const) (DISP7SEG_CONFIG_BADDR))
#define DISP7SEG_CONFIG_LOOW		0x7
#define DISP7SEG_CONFIG_EFSS		0x4
#define DISP7SEG_CONFIG_OUTD		0x3
#define DISP7SEG_CONFIG_SRES		0x2
#define DISP7SEG_CONFIG_ID		0x1
#define DISP7SEG_CONFIG_INTA		0x0

#define DISP7SEG_PRESC_L_BOFF		4
#define DISP7SEG_PRESC_L_BADDR		DISP7SEG_BADDR + DISP7SEG_PRESC_L_BOFF
#define DISP7SEG_PRESC_L		(*(volatile uint8_t *const) (DISP7SEG_PRESC_L_BADDR))

#define DISP7SEG_PRESC_H_BOFF		5
#define DISP7SEG_PRESC_H_BADDR		DISP7SEG_BADDR + DISP7SEG_PRESC_H_BOFF
#define DISP7SEG_PRESC_H		(*(volatile uint8_t *const) (DISP7SEG_PRESC_H_BADDR))

#define DISP7SEG_DISPLAY_BOFF		6
#define DISP7SEG_DISPLAY_BADDR		DISP7SEG_BADDR + DISP7SEG_DISPLAY_BOFF
#define DISP7SEG_DISPLAY		(*(volatile uint8_t *const) (DISP7SEG_DISPLAY_BADDR))

#define DISP7SEG_LED_BOFF		7
#define DISP7SEG_LED_BADDR		DISP7SEG_BADDR + DISP7SEG_LED_BOFF
#define DISP7SEG_LED			(*(volatile uint8_t *const) (DISP7SEG_LED_BADDR))

#endif

