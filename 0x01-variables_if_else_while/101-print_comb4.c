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

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (m = '0'; m <= '9'; m++)
			{
				if (n > ch && m > n)
				{
					putchar(ch);
					putchar(n);
					putchar(m);

					if (ch != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
