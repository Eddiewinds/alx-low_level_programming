#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to print.
 * @size: The size of the buffer.
 *
 * Return: void.
 */
void print_buffer(char *b, int size)
{
    int o, j, i;

    o = 0;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    while (o < size)
    {
        j = size - o < 10 ? size - o : 10;
        printf("%08x: ", o);

        for (i = 0; i < 10; i++)
        {
            if (i < j)
                printf("%02x", *(b + o + i));
            else
                printf("  ");

            if (i % 2)
                printf(" ");
        }

        for (i = 0; i < j; i++)
        {
            int c = *(b + o + i);

            if (c < 32 || c > 126)
                c = '.';

            printf("%c", c);
        }

        printf("\n");
        o += 10;
    }
}	
