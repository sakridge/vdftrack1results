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

#define GMP_LIMB_BITS 32
#define GMP_LIMB_BYTES 4

/* 2000 MHz Cortex-A15 with Neon (in spite of file position) */
/* FFT tuning limit = 0.5 M */
/* Generated by tuneup.c, 2017-02-23, gcc 5.4 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          3
#define MOD_1U_TO_MOD_1_1_THRESHOLD          3
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        10
#define MOD_1_2_TO_MOD_1_4_THRESHOLD     MP_SIZE_T_MAX
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      9
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1N_PI1_METHOD                 1
#define DIV_QR_1_NORM_THRESHOLD          MP_SIZE_T_MAX  /* never */
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           17

#define DIV_1_VS_MUL_1_PERCENT             265

#define MUL_TOOM22_THRESHOLD                28
#define MUL_TOOM33_THRESHOLD               114
#define MUL_TOOM44_THRESHOLD               178
#define MUL_TOOM6H_THRESHOLD               238
#define MUL_TOOM8H_THRESHOLD               597

#define MUL_TOOM32_TO_TOOM43_THRESHOLD     113
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     130
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     115
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     120
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     170

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 40
#define SQR_TOOM3_THRESHOLD                126
#define SQR_TOOM4_THRESHOLD                342
#define SQR_TOOM6_THRESHOLD                446
#define SQR_TOOM8_THRESHOLD                644

#define MULMID_TOOM42_THRESHOLD             52

#define MULMOD_BNM1_THRESHOLD               19
#define SQRMOD_BNM1_THRESHOLD               20

#define MUL_FFT_MODF_THRESHOLD             560  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    560, 5}, {     25, 6}, {     27, 7}, {     15, 6}, \
    {     31, 7}, {     19, 6}, {     39, 7}, {     25, 6}, \
    {     51, 7}, {     27, 8}, {     15, 7}, {     33, 8}, \
    {     19, 7}, {     41, 8}, {     23, 7}, {     51, 8}, \
    {     27, 9}, {     15, 8}, {     31, 7}, {     63, 8}, \
    {     39, 9}, {     23, 8}, {     55, 9}, {     31, 8}, \
    {     67, 9}, {     39, 8}, {     83, 9}, {     47, 8}, \
    {     99, 9}, {     55,10}, {     31, 9}, {     79,10}, \
    {     47, 9}, {     95,11}, {     31,10}, {     63, 9}, \
    {    135,10}, {     79, 9}, {    167,10}, {     95, 9}, \
    {    191,10}, {    111,11}, {     63,10}, {    127, 9}, \
    {    255,10}, {    143, 9}, {    287, 8}, {    575,10}, \
    {    159, 9}, {    319,11}, {     95,10}, {    191, 9}, \
    {    383, 8}, {    767,12}, {     63,11}, {    127, 9}, \
    {    511,10}, {    271, 9}, {    543, 8}, {   1087,10}, \
    {    287, 9}, {    575,10}, {    303,11}, {    159,10}, \
    {    319, 9}, {    639,10}, {    335, 9}, {    671,10}, \
    {    351, 9}, {    735,11}, {    191,10}, {    383, 9}, \
    {    767,10}, {    399, 9}, {    799,10}, {    415, 9}, \
    {    831,11}, {    223,10}, {    447,12}, {   4096,13}, \
    {   8192,14}, {  16384,15}, {  32768,16} }
#define MUL_FFT_TABLE3_SIZE 83
#define MUL_FFT_THRESHOLD                 5760

#define SQR_FFT_MODF_THRESHOLD             525  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    525, 5}, {     25, 6}, {     13, 5}, {     27, 6}, \
    {     27, 7}, {     15, 6}, {     32, 7}, {     19, 6}, \
    {     39, 7}, {     25, 6}, {     51, 7}, {     27, 8}, \
    {     15, 7}, {     33, 8}, {     19, 7}, {     41, 8}, \
    {     23, 7}, {     51, 8}, {     27, 9}, {     15, 8}, \
    {     31, 7}, {     63, 8}, {     39, 9}, {     23, 8}, \
    {     55,10}, {     15, 9}, {     31, 8}, {     67, 9}, \
    {     39, 8}, {     79, 9}, {     47, 8}, {     95, 9}, \
    {     55,10}, {     31, 9}, {     79,10}, {     47, 9}, \
    {     95,11}, {     31,10}, {     63, 9}, {    135,10}, \
    {     79, 9}, {    159,10}, {     95, 9}, {    191,10}, \
    {    111,11}, {     63,10}, {    143, 9}, {    287,10}, \
    {    159,11}, {     95,10}, {    191, 9}, {    383, 8}, \
    {    767,12}, {     63,11}, {    127, 9}, {    511,10}, \
    {    271, 9}, {    543,10}, {    287, 9}, {    575,11}, \
    {    159,10}, {    319, 9}, {    639,10}, {    335, 9}, \
    {    671,10}, {    351, 9}, {    735,11}, {    191,10}, \
    {    383, 9}, {    767,10}, {    399, 9}, {    799,10}, \
    {    415, 9}, {    831,11}, {    223,12}, {   4096,13}, \
    {   8192,14}, {  16384,15}, {  32768,16} }
#define SQR_FFT_TABLE3_SIZE 79
#define SQR_FFT_THRESHOLD                 5312

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  37
#define MULLO_MUL_N_THRESHOLD             8907
#define SQRLO_BASECASE_THRESHOLD            10
#define SQRLO_DC_THRESHOLD                  33
#define SQRLO_SQR_THRESHOLD              10323

#define DC_DIV_QR_THRESHOLD                 57
#define DC_DIVAPPR_Q_THRESHOLD             268
#define DC_BDIV_QR_THRESHOLD                48
#define DC_BDIV_Q_THRESHOLD                296

#define INV_MULMOD_BNM1_THRESHOLD           54
#define INV_NEWTON_THRESHOLD               262
#define INV_APPR_THRESHOLD                 260

#define BINV_NEWTON_THRESHOLD              372
#define REDC_1_TO_REDC_2_THRESHOLD          62
#define REDC_2_TO_REDC_N_THRESHOLD           0  /* always */

#define MU_DIV_QR_THRESHOLD               1787
#define MU_DIVAPPR_Q_THRESHOLD            1718
#define MUPI_DIV_QR_THRESHOLD               99
#define MU_BDIV_QR_THRESHOLD              1528
#define MU_BDIV_Q_THRESHOLD               1836

#define POWM_SEC_TABLE  1,32,161,473,1509

#define GET_STR_DC_THRESHOLD                16
#define GET_STR_PRECOMPUTE_THRESHOLD        35
#define SET_STR_DC_THRESHOLD               100
#define SET_STR_PRECOMPUTE_THRESHOLD      1057

#define FAC_DSC_THRESHOLD                  312
#define FAC_ODD_THRESHOLD                   27

#define MATRIX22_STRASSEN_THRESHOLD         31
#define HGCD_THRESHOLD                     145
#define HGCD_APPR_THRESHOLD                173
#define HGCD_REDUCE_THRESHOLD             3389
#define GCD_DC_THRESHOLD                   684
#define GCDEXT_DC_THRESHOLD                469
#define JACOBI_BASE_METHOD                   4