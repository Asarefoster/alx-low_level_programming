#include "main.h"

/**
*main - entry point
*Description: function that prints the alphabet, in lowercase
*Return: always 0
*/
void print_alphabet(void);
{
	int n;

	for (n = '97'; n <= '122'; n++)
	{
		_putchar(n);
	}
	_putchar('\n')
}
