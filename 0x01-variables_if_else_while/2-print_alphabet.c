#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line
*
* Return: Always 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n'); /* this is an ascii code for new line*/

	return (0);
}
