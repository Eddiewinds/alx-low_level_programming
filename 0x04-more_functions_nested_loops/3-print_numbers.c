#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a newline
 * 
 * Return: void
 */
void print_numbers(void)
{
    int x;

    for (x = 0; x <= 9; x++)
    {
        _putchar(x + '0');
    }
    _putchar('\n');
}
