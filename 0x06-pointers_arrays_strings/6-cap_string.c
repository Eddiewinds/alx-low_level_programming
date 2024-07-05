#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the resulting string `str`.
 */
char *cap_string(char *str)
{
    int i = 0;
    int capitalize = 1; // Start with first character capitalized

    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            capitalize = 1; // Set flag to capitalize next character
        }
        else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A'; // Convert lowercase to uppercase
            capitalize = 0; // Reset flag after capitalizing
        }
        else
        {
            capitalize = 0; // Reset flag if already capitalized
        }

        i++;
    }

    return str;
}
