/*
 * # Copyright (c) 2021 Alexander Bulychev <a.f.bulychev@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 */

#include <kernel.h>
#include <device.h>
#include <init.h>
#include <arch/arm/aarch32/cortex_a_r/cmsis.h>

/**
 *
 * @brief Perform basic hardware initialization
 *
 * @return 0
 */

static int soc_init(const struct device *arg)
{
	ARG_UNUSED(arg);
	NMI_INIT();
	return 0;
}

SYS_INIT(soc_init, PRE_KERNEL_1, CONFIG_KERNEL_INIT_PRIORITY_DEFAULT);
