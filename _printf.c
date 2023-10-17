#include "main.h"

/**
 * _printf - function that produces output according to format
 * @format: pointer
 * Return: (number of chars)
 */

int _printf(const char *format, ...)
{
	int pointerChar = 0;
	va_list p_rgs;

	va_start(p_rgs, format);

	if (format == NULL)
	return (-1);
	while (*format)
	{
		if (*format != '%')
		{	write(1, format, 1);
			pointerChar++; }
		else
		{
			format++;
			if (*format == '\0')
			break;
			if (*format == '%')
			{	write(1, format, 1);
				pointerChar++; }
			else if (*format == 'c')
			{	char ch = (char) va_arg(p_rgs, int);

				write(1, &ch, 1);
				pointerCahr++; }
			else if (*format == 's')
			{	char *star = va_arg(p_rgs, char*);
				int len = strlen(star);

				write(1, star, len);
				pointerChar += len; }
		}
		format++;
	}
	va_end(p_rgs);
	return (pointerChar);
}
