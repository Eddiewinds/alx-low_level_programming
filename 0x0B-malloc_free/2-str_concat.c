#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings of any size.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: The two strings concatenated.
 */
char *str_concat(char *s1, char *s2)
{
    int i = 0, j = 0, k = 0, l = 0;
    char *s;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    // Calculate the length of s1
    while (s1[i])
        i++;

    // Calculate the length of s2
    while (s2[j])
        j++;

    // Total length of the concatenated string
    l = i + j;

    // Allocate memory for the concatenated string
    s = malloc((sizeof(char) * l) + 1);

    if (s == NULL)
        return (NULL);

    // Copy s1 into the new string
    for (k = 0; k < i; k++)
        s[k] = s1[k];

    // Copy s2 into the new string
    for (k = 0; k < j; k++)
        s[i + k] = s2[k];

    // Null-terminate the concatenated string
    s[i + j] = '\0';

    return (s);
}
