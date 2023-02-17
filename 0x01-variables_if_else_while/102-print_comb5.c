#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (d = 48; d <= 57; d++)
			{
				for (c = 48; c <= 57; c++)
				{
					if (((d + c) > (a + b) &&  k >= a) || a < d)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

					if (a + b + c + d == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
