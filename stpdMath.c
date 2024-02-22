/**
 * @file stpdMath.c
 * @author Luca Grosso (grossolu@icloud.com)
 * @brief Include some stupidy functions
 * @version 0.1
 * @date 2024-02-22
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include "stpdMath.h"

/**
 * @brief give the mean of 2 integer number
 * 
 * @param a first integer number
 * @param b second interger number
 * @return mean of the 2 number 
 */
float mean(int a, int b)
{
    return ((float)(a+b)/2.0);
}

/**
 * @brief mean function for complx numbers
 * 
 * @param a first complex number
 * @param b secondo complex number
 * @return complex_float_type complex float type
 */
complex_float_type complex_mean(complex_int_type a, complex_int_type b)
{
    complex_float_type result;
    result.re=(a.re+b.re)/2.0;
    result.im=(a.im+b.im)/2.0;
    return result;
}