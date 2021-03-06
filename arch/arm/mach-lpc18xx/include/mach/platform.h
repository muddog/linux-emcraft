/*
 * (C) Copyright 2011, 2012
 * Emcraft Systems, <www.emcraft.com>
 * Alexander Potashev <aspotashev@emcraft.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __ASM_ARCH_PLATFORM_H
#define __ASM_ARCH_PLATFORM_H

#define PLATFORM_LPC18XX_HITEX_LPC4350_EVAL	0
#define PLATFORM_LPC18XX_HITEX_LPC1850_EVAL	1
#define PLATFORM_LPC18XX_EA_LPC4357_EVAL	2

int lpc18xx_platform_get(void);

#define DEVICE_LPC4350				0
#define DEVICE_LPC1850				1

int lpc18xx_device_get(void);

#endif /* __ASM_ARCH_PLATFORM_H */
