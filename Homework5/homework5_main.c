/*
 * homework5_main.c: Starter code for homework 5
 *
 * ECE 266, fall 2020
 * Created by Zhao Zhang
 */

#include <homework5.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "launchpad.h"

// Test ssat10bits()
void testSsat10Bits()
{
    uprintf("\n\r*** Test ssat10bits() ***\n\r");
    uprintf("c_ssat10bits(%d) = %d\n\r", -10000, c_ssat10Bits(-10000));
    uprintf(" _ssat10bits(%d) = %d\n\r", -10000, ssat10Bits(-10000));
    uprintf("c_ssat10bits(0x%X) = 0x%X\n\r", -10000, c_ssat10Bits(-10000));
    uprintf(" _ssat10bits(%X) = 0x%X\n\r", -10000, ssat10Bits(-10000));
    uprintf("c_ssat10bits(%d) = %d\n\r", -400, c_ssat10Bits(-400));
    uprintf("  ssat10bits(%d) = %d\n\r", -400, ssat10Bits(-400));
    uprintf("c_ssat10bits(%d) = %d\n\r", 400, c_ssat10Bits(400));
    uprintf("  ssat10bits(%d) = %d\n\r", 400, ssat10Bits(400));
    uprintf("c_ssat10bits(%d) = %d\n\r", 10000, c_ssat10Bits(10000));
    uprintf("  ssat10bits(%d) = %d\n\r", 10000, ssat10Bits(10000));
}

// Test usat10bits()
void testUsat10Bits()
{
    uprintf("\n\r*** Test usat10bits() ***\n\r");
    uprintf("c_ssat10bits(%d) = %d\n\r", 400, c_usat10Bits(400));
    uprintf("  ssat10bits(%d) = %d\n\r", 400, usat10Bits(400));
    uprintf("c_ssat10bits(%d) = %d\n\r", 10000, c_usat10Bits(10000));
    uprintf("  ssat10bits(%d) = %d\n\r", 10000, usat10Bits(10000));
    uprintf("c_ssat10bits(0x%X) = 0x%X\n\r", 10000, c_usat10Bits(10000));
    uprintf("  ssat10bits(0x%X) = 0x%X\n\r", 10000, usat10Bits(10000));
}

// Test rev16ForByte()
void testRev16ForByte()
{
    uprintf("\n\r*** Test rev16ForByte() ***\n\r");
    uprintf("c_rev16ForByte(0x%X) = 0x%X\n\r", 0x89ABCDEF,
            c_rev16ForByte(0x89ABCDEF));
    uprintf("  rev16ForByte(0x%X) = 0x%X\n\r", 0x89ABCDEF,
            rev16ForByte(0x89ABCDEF));
}

// Test signExt8to32()
void testSignExt8to32()
{
    uprintf("\n\r*** Test signExt8to32() ***\n\r");
    uprintf("c_signExt8to32(0x%X) = 0x%X\n\r", 0x80,
            c_signExt8to32(0x80));
    uprintf("  signExt8to32(0x%X) = 0x%X\n\r", 0x80,
            signExt8to32(0x80));
}

// Test rotateRight8()
void testRotateRight8()
{
    uprintf("\n\r*** Test rotateRight8() ***\n\r");
    uprintf("c_rotateRight8(0x%X) = 0x%X\n\r", 0x12345678,
            c_rotateRight8(0x12345678));
    uprintf("  rotateRight8(0x%X) = 0x%X\n\r", 0x12345678,
            rotateRight8(0x12345678));
}


// Test multiply17()
void testMultiply17()
{
    uprintf("\n\r*** Test multiply17() ***\n\r");
    uprintf("c_multiply17(%d) = %d\n\r", -10,
            c_multiply17(-10));
    uprintf("  multiply17(%d) = %d\n\r", -10,
            multiply17(-10));
}

int main(void)
{
    lpInit();
    
    testSsat10Bits();
    testUsat10Bits();
    testRev16ForByte();
    testSignExt8to32();
    testRotateRight8();
    testMultiply17();

    // Never exit
    while (true) {
    }
}

