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
    char *start = str;
    int diff = 0;

    while (*ptr != '\0')
    {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
        {
            diff = (*ptr >= 'a' && *ptr <= 'z') ? 'a' : 'A';
            *ptr = ((*ptr - diff + 13) % 26) + diff;
        }
        ptr++;
    }

    return start;
}
