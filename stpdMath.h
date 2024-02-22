/**
 * @file stpdmath.h
 * @author Luca Grosso (grossolu@icloud.com)
 * @brief Little stupidy library about math
 * @version 0.1
 * @date 2024-02-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/**
 * @brief include stpdMath.h only if not already included
 * 
 */
#ifndef _STPDMATHH_
#define _STPDMATHH_

/**
 * @brief struct for integer complex number
 * 
 */
typedef struct complex_int
{
    int re;
    int im;
} complex_int_type;

/**
 * @brief struct for float complex number
 * 
 */
typedef struct complex_float
{
    float re;
    float im;
} complex_float_type;


float mean (int a, int b);
complex_float_type complex_mean(complex_int_type a, complex_int_type b);




#endif