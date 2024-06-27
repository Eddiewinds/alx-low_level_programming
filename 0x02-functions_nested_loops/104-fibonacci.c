#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)
{
    int count;
    unsigned long fib1 = 1, fib2 = 2, sum;
    unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
    unsigned long half1, half2;

    /* Print the first two Fibonacci numbers */
    printf("%lu, %lu", fib1, fib2);

    /* Print the first 92 Fibonacci numbers */
    for (count = 2; count < 92; count++)
    {
        sum = fib1 + fib2;
        printf(", %lu", sum);
        fib1 = fib2;
        fib2 = sum;
    }

    /* Split the remaining numbers into two halves */
    fib1_half1 = fib1 / 10000000000;
    fib2_half1 = fib2 / 10000000000;
    fib1_half2 = fib1 % 10000000000;
    fib2_half2 = fib2 % 10000000000;

    /* Print the remaining Fibonacci numbers */
    for (count = 92; count < 98; count++)
    {
        half1 = fib1_half1 + fib2_half1;
        half2 = fib1_half2 + fib2_half2;
        if (fib1_half2 + fib2_half2 > 9999999999)
        {
            half1 += 1;
            half2 %= 10000000000;
        }
        printf(", %lu%010lu", half1, half2);
        fib1_half1 = fib2_half1;
        fib1_half2 = fib2_half2;
        fib2_half1 = half1;
        fib2_half2 = half2;
    }

    /* Print the final Fibonacci number without a trailing comma */
    half1 = fib1_half1 + fib2_half1;
    half2 = fib1_half2 + fib2_half2;
    if (fib1_half2 + fib2_half2 > 9999999999)
    {
        half1 += 1;
        half2 %= 10000000000;
    }
    printf(", %lu%010lu\n", half1, half2);

    return (0);
}
