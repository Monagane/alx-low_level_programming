#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10x
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char alph = 'a';

	while (round < 10)
	{
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		round++;
	}
}
