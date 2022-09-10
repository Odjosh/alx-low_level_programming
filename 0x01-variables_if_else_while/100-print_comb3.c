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

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);

				if (ch != '8' || (ch == '8' && n != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
