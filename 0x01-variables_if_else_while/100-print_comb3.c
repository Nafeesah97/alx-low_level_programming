#include <stdio.h>

/**
 * main - a program that print  possible different combinations of two digits
 *
 * Return: Always zero
 */

int main(void)
{
    int i, j;

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
	{
            putchar(i + '0');
            putchar(j + '0');
	    for (i <= '7'; i++)
	    {
	    	putchar(',');
            	putchar(' ');
	    }
        }
    }
    putchar('\n');

    return 0;
}

