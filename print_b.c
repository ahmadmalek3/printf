#include "main.h"

/**
 * print_bin - converts to binary
 * @valy: argument
 * Return: integer
*/

int print_bin(va_list valy)
{
	int flag = 0;
	int cont = 0;
	int x, y = 1, b;
	unsigned int num = va_arg(valy, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((y << (32 - x)) & num);
		if (p >> (31 - x))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - x);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
