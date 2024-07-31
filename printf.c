#include "main.h"
#include <stdio.h>

/**
 * _printf - prints output format text
 *
 * @format: specifies the format
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	unsigned int t, s_counter, count = 0;

	va_list ar;

	va_start(ar, format);

	for (t = 0; format[t] != '\0'; t++)
	{
		if (format[t] != '%')
		{
			tf_putchar(format[t]);
		}
		else if (format[t + 1] == 'c')
		{
			tf_putchar(va_arg(ar, int));
			t++;
		}
		else if (format[t + 1] == 's')
		{
			s_counter = puts(va_arg(ar, char *));
			t++;
			count += (s_counter - 1);
		}
		else if (format[t + 1] == '%')
		{
			tf_putchar('%');
		}
		count += 1;
	}
	va_end(ar);

	return (count);
}
