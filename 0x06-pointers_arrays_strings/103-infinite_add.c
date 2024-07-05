#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum, i, j;

    /* Find the lengths of n1 and n2 */
    while (n1[len1])
        len1++;
    while (n2[len2])
        len2++;

    /* Check if the result can fit in the buffer */
    if (len1 + 2 > size_r || len2 + 2 > size_r)
        return (0);

    r[size_r - 1] = '\0';
    i = len1 - 1;
    j = len2 - 1;
    size_r -= 2;  /* Adjust for the null terminator and one extra space */

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';

        if (size_r < 0)
            return (0);

        r[size_r--] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (size_r < 0)
        return (r + size_r + 1);

    for (i = size_r + 1, j = 0; r[i]; i++, j++)
        r[j] = r[i];
    r[j] = '\0';

    return (r);
}
