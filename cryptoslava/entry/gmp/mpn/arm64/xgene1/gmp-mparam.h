/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 2017 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* 2400 MHz AppliedMicro X-Gene */
/* FFT tuning limit = 0.5 M */
/* Generated by tuneup.c, 2017-02-23, gcc 4.8 */

#define DIVREM_1_NORM_THRESHOLD              0  /* always */
#define DIVREM_1_UNNORM_THRESHOLD            0  /* always */
#define MOD_1_1P_METHOD                      1
#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          7
#define MOD_1U_TO_MOD_1_1_THRESHOLD          5
#define MOD_1_1_TO_MOD_1_2_THRESHOLD         0  /* never mpn_mod_1_1p */
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        22
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     13
#define USE_PREINV_DIVREM_1                  1
#define DIV_QR_1N_PI1_METHOD                 1
#define DIV_QR_1_NORM_THRESHOLD              1
#define DIV_QR_1_UNNORM_THRESHOLD            1
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always */
#define BMOD_1_TO_MOD_1_THRESHOLD           27

#define DIV_1_VS_MUL_1_PERCENT             249

#define MUL_TOOM22_THRESHOLD                18
#define MUL_TOOM33_THRESHOLD                61
#define MUL_TOOM44_THRESHOLD               112
#define MUL_TOOM6H_THRESHOLD               238
#define MUL_TOOM8H_THRESHOLD               321

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      73
#define MUL_TOOM32_TO_TOOM53_THRESHOLD      99
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      76
#define MUL_TOOM42_TO_TOOM63_THRESHOLD      72
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     106

#define SQR_BASECASE_THRESHOLD               0  /* always */
#define SQR_TOOM2_THRESHOLD                 27
#define SQR_TOOM3_THRESHOLD                 77
#define SQR_TOOM4_THRESHOLD                154
#define SQR_TOOM6_THRESHOLD                206
#define SQR_TOOM8_THRESHOLD                296

#define MULMID_TOOM42_THRESHOLD             46

#define MULMOD_BNM1_THRESHOLD               11
#define SQRMOD_BNM1_THRESHOLD               13

#define MUL_FFT_MODF_THRESHOLD             412  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    412, 5}, {     15, 6}, {      8, 5}, {     17, 6}, \
    {     19, 7}, {     12, 6}, {     25, 7}, {     17, 8}, \
    {      9, 7}, {     20, 8}, {     11, 7}, {     25, 8}, \
    {     13, 7}, {     27, 8}, {     15, 7}, {     31, 8}, \
    {     17, 7}, {     35, 8}, {     21, 9}, {     11, 8}, \
    {     27, 9}, {     15, 8}, {     35, 9}, {     19, 8}, \
    {     41, 9}, {     23, 8}, {     49, 9}, {     27,10}, \
    {     15, 9}, {     31, 8}, {     63, 9}, {     39,10}, \
    {     23, 9}, {     55,11}, {     15,10}, {     31, 9}, \
    {     71,10}, {     39, 9}, {     83,10}, {     47, 9}, \
    {     99,10}, {     55,11}, {     31,10}, {     63, 9}, \
    {    127,10}, {     71, 9}, {    143,10}, {     79,11}, \
    {     47,10}, {    103,12}, {     31,11}, {     63,10}, \
    {    127, 9}, {    255,10}, {    135, 9}, {    271,10}, \
    {    143,11}, {     79, 9}, {    319,10}, {    167,11}, \
    {     95, 9}, {    383, 8}, {    767,10}, {    207, 9}, \
    {    415,11}, {    111,12}, {     63,11}, {    127,10}, \
    {    255, 9}, {    511,10}, {    271, 9}, {    543,11}, \
    {    143,10}, {    287, 9}, {    575,10}, {    319, 9}, \
    {    639,10}, {    351,12}, {     95,10}, {    383, 9}, \
    {    767,11}, {    207,10}, {    415, 9}, {    831,11}, \
    {    223,10}, {    447,13}, {   8192,14}, {  16384,15}, \
    {  32768,16}, {  65536,17}, { 131072,18}, { 262144,19}, \
    { 524288,20}, {1048576,21}, {2097152,22}, {4194304,23}, \
    {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 97
#define MUL_FFT_THRESHOLD                 4224

#define SQR_FFT_MODF_THRESHOLD             340  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    340, 5}, {     15, 6}, {      8, 5}, {     17, 6}, \
    {      9, 5}, {     19, 6}, {     19, 7}, {     11, 6}, \
    {     23, 7}, {     21, 8}, {     11, 7}, {     24, 8}, \
    {     15, 7}, {     31, 8}, {     21, 9}, {     11, 8}, \
    {     27, 9}, {     15, 8}, {     33, 9}, {     19, 8}, \
    {     39, 9}, {     23, 8}, {     47, 9}, {     27,10}, \
    {     15, 9}, {     39,10}, {     23, 9}, {     51,11}, \
    {     15,10}, {     31, 9}, {     67,10}, {     39, 9}, \
    {     79,10}, {     47, 9}, {     95,10}, {     55,11}, \
    {     31,10}, {     79,11}, {     47,10}, {     95, 9}, \
    {    191,12}, {     31,11}, {     63,10}, {    127, 9}, \
    {    255, 8}, {    511,10}, {    135, 9}, {    271,11}, \
    {     79, 9}, {    319, 8}, {    639,11}, {     95,10}, \
    {    191, 9}, {    383,10}, {    207, 9}, {    415,12}, \
    {     63,11}, {    127,10}, {    255, 9}, {    511,10}, \
    {    271, 9}, {    543,10}, {    287, 9}, {    575,10}, \
    {    319, 9}, {    639,11}, {    175,10}, {    351,12}, \
    {     95,11}, {    191,10}, {    383, 9}, {    767,11}, \
    {    207,10}, {    415, 9}, {    831,13}, {   8192,14}, \
    {  16384,15}, {  32768,16}, {  65536,17}, { 131072,18}, \
    { 262144,19}, { 524288,20}, {1048576,21}, {2097152,22}, \
    {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 86
#define SQR_FFT_THRESHOLD                 3264

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  45
#define MULLO_MUL_N_THRESHOLD             8397
#define SQRLO_BASECASE_THRESHOLD             2
#define SQRLO_DC_THRESHOLD                 123
#define SQRLO_SQR_THRESHOLD               6461

#define DC_DIV_QR_THRESHOLD                 64
#define DC_DIVAPPR_Q_THRESHOLD             202
#define DC_BDIV_QR_THRESHOLD                63
#define DC_BDIV_Q_THRESHOLD                132

#define INV_MULMOD_BNM1_THRESHOLD           38
#define INV_NEWTON_THRESHOLD               242
#define INV_APPR_THRESHOLD                 226

#define BINV_NEWTON_THRESHOLD              254
#define REDC_1_TO_REDC_N_THRESHOLD          66

#define MU_DIV_QR_THRESHOLD               1334
#define MU_DIVAPPR_Q_THRESHOLD            1258
#define MUPI_DIV_QR_THRESHOLD              124
#define MU_BDIV_QR_THRESHOLD              1187
#define MU_BDIV_Q_THRESHOLD               1210

#define POWM_SEC_TABLE  3,28,200,734,2499

#define GET_STR_DC_THRESHOLD                11
#define GET_STR_PRECOMPUTE_THRESHOLD        22
#define SET_STR_DC_THRESHOLD               532
#define SET_STR_PRECOMPUTE_THRESHOLD      2497

#define FAC_DSC_THRESHOLD                  216
#define FAC_ODD_THRESHOLD                   26

#define MATRIX22_STRASSEN_THRESHOLD         14
#define HGCD_THRESHOLD                     153
#define HGCD_APPR_THRESHOLD                182
#define HGCD_REDUCE_THRESHOLD             2479
#define GCD_DC_THRESHOLD                   584
#define GCDEXT_DC_THRESHOLD                440
#define JACOBI_BASE_METHOD                   4