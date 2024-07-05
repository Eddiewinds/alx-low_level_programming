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

    while (*ptr != '\0')
    {
        if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
        {
            *ptr = *ptr + 13;
        }
        else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
        {
            *ptr = *ptr - 13;
        }

        ptr++;
    }

    return str;
}
