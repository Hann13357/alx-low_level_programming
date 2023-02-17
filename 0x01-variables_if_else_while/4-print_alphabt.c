#include <stdio.h>

/**
 * main - Print all aphabet except q and e.
 *
 * Description: 'the program description'
 *
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}
		if (la == 'e' || la == 'q')
	{

		putchar(la);
	}

	putchar('\n');

	return (0);
}
