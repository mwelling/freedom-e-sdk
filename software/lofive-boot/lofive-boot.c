/* Copyright 2019 QWERTY Embedded Design, LLC */
/* SPDX-License-Identifier: Apache-2.0 */

#include <stdio.h>
#include <metal/init.h>

#define FINAL_ADDRESS 0x20400000
#define BOOTLOADER_VERSION "v0.0"

int main()
{
    printf("LoFive Bootloader (%s) \n", BOOTLOADER_VERSION);
    printf("Jumping to 0x%x\n", FINAL_ADDRESS);

    void (*pgm_start)(void) = (void*) FINAL_ADDRESS;
    pgm_start();

    return 0xDEADBEEF;
}
