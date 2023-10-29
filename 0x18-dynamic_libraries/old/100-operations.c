/**
 * File: 100-operations.c
 * Description: This file contains C functions for performing basic mathematical operations.
 *              - add(a, b): Adds two integers.
 *              - sub(a, b): Subtracts one integer from another.
 *              - mul(a, b): Multiplies two integers.
 *              - div(a, b): Divides one integer by another (handles division by zero).
 *              - mod(a, b): Calculates the remainder of one integer divided by another (handles modulo by zero).
 */

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
}

int mod(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
}
