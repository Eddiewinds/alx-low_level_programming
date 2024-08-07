#include "main.h"

/**
 * _strspn -Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, n, value, check;

    value = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        check = 0;

        for (n = 0; accept[n] != '\0'; n++)
        {
            if (accept[n] == s[i])
            {
                value++;
                /* Break out of inner loop once a match is found */
                check = 1;
                break;
            }
        }

        if (check == 0)
        {
            break;
        }
    }

    return value;
}
