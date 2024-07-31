#include "main.h"
/**
 * _printf - prints output format text
 *
 * @format: specifies the format
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	unsigned int t, count = 0;

	va_list ar;

	va_start(ar, format);

	for (t = 0; format[t] != '\0'; t++)
	{
		if (format[t] != '%')
		{
			tf_putchar(format[t]);
		}
		if (format[t] == '%' && format[t + 1] == 'c')
		{
			tf_putchar(va_arg(ar, int));
			t++;
		}
		count += 1;
	}
	va_end(ar);

	return (count);
}
