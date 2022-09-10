#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0
*/
int main(void)
{
	int ch;
	int n;
	int m;
	int k;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (m = 48; m <= 57; m++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (((m + k) > (ch + n) && m >= ch) || ch < m)
					{
						putchar(ch);
						putchar(n);
						putchar(' ');
						putchar(m);
						putchar(k);

					if (ch + n + m + k == 227 && ch == 57)
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
