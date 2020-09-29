/*
 * homework5.h: Starter code for homework 5
 *
 * ECE 266, fall 2020
 * Created by Zhao Zhang
 */

#ifndef HOMEWORK5_H_
#define HOMEWORK5_H_

#include <stdint.h>

// saturate a 32-bit signed integer to 10-bit
int32_t c_ssat10Bits(int32_t n);
int32_t ssat10Bits(int32_t n);

// saturate a 32-bit unsigned integer to 10-bit
uint32_t c_usat10Bits(uint32_t n);
uint32_t usat10Bits(uint32_t n);

// reverse byte ordering for halfwords within word
uint32_t rev16ForByte(uint32_t n);
uint32_t c_rev16ForByte(uint32_t n);

// sign-extend 8-bit to 32-bit
int32_t signExt8to32(int32_t n);
int32_t c_signExt8to32(int32_t n);

// rotate right by 8 bit
uint32_t rotateRight8(uint32_t n);
uint32_t c_rotateRight8(uint32_t n);

// multiply by 17 without using multiply
int32_t multiply17(int32_t x);
int32_t c_multiply17(int32_t x);

#endif /* HOMEWORK5_H_ */

