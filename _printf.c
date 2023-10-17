#include "main.h"

/**
 * _printf - function that produces output according to format
 * @format: pointer
 * Return: (number of chars)
 */

int _printf(const char *format, ...)
{
	int p_chara = 0;
	va_list o_rgs;

	va_start(o_rgs, format);

	if (format == NULL)
	return (-1);
	while (*format)
	{
		if (*format != '%')
		{	write(1, format, 1);
			p_chara++; }
		else
		{
			format++;
			if (*format == '\0')
			break;
			if (*format == '%')
			{	write(1, format, 1);
				p_chara++; }
			else if (*format == 'c')
			{	char ch = (char) va_arg(o_rgs, int);

				write(1, &ch, 1);
				p_chara++; }
			else if (*format == 's')
			{	char *star = va_arg(o_rgs, char*);
				int len = strlen(star);

				write(1, star, len);
				p_chara += len; }
		}
		format++;
	}
	va_end(o_rgs);
	return (p_chara);
}
