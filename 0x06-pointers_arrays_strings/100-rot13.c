#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to encode.
 *
 * Return: A pointer to the resulting encoded string `s`.
 */
char *rot13(char *s)
{
    int i;
    int j;
    char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 52; j++)
        {
            if (s[i] == data1[j])
            {
                s[i] = datarot[j];
                break;
            }
        }
    }

    return (s);
}
