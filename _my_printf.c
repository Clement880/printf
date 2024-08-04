#include <unistd.h>
#include <stdarg.h>

int _putchar(char c)
{
	return write(1, &c, 1);
}
int _print_string(char *str)
{
	int t = 0;
	while (str[t] != '\0')
	{
		int status = _putchar(str[t]);
		if (status == -1)
		return (-1);
		t++;
	}

	return (t);
}
int _print_int_rec(int num)
{
	int count = 0;
	/**
	 * 187 & 10 = 7
	 * 187 / 10 = 18
	 * 18 % 10 = 8 -> 18 / 10 = 1
	 * 1 % 10 = 1 -> 1 / 10 = 0
	 */
	if (num == 0)
		return (0);

	if (num < 0)
	{
		count = _putchar('-');
		num = num * -1;
	}
	/**
	while (num > 0)
	{
		int digit = num % 10;
		_putchar(digit + '0');
		count++;
		num /= 10;
	}
	*/
	int count_rest = _print_int_rec(num / 10) + 1;
	_putchar('0' + num % 10);

	return (count + count_rest);
}

int _print_int(int num)
{
	if (num == 0)
		return _putchar('0');
	return _print_int_rec(num);
}
int _my_printf(const char *format, ...)
{
	va_list args;
	int  count = 0;
	int t = 0;
	va_start(args, format);

	for (t = 0; format[t] != '\0'; t++)
	{
		if (format[t] == '%')
		{
			t++;
			if (format[t] == 'c')
			{
			char chr = va_arg(args, int);
			_putchar(chr);
			count = count + _putchar(chr);
			}
			else if (format[t] == 's') 
			{ 
				char *str = va_arg(args, char *);
				count = count + _print_string(str);
			}
			else if (format[t] == 'd')
			{
				int num = va_arg(args, int);
				count = count + _print_int(num);
			}
		}
		else
		{
		count = count +	_putchar(format[t]);
		}
	}
	return (count);
}
