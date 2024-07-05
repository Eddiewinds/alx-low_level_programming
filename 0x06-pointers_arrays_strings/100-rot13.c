#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: A pointer to the resulting encoded string `str`.
 */
char *rot13(char *str)
{
    char *ptr = str;
    char base, offset;

    while (*ptr != '\0')
    {
        base = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : (*ptr >= 'A' && *ptr <= 'Z') ? 'A' : 0;
        offset = (*ptr >= 'a' && *ptr <= 'z') ? 13 : (*ptr >= 'A' && *ptr <= 'Z') ? 13 : 0;

        if (base)
            *ptr = (((*ptr - base) + offset) % 26) + base;

        ptr++;
    }

    return str;
}
