#include "main.h"

/**
 * _printf - prints output
 * @format: format parameter
 * Return: printed char
 */
int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args;
	int (*func)(va_list) = NULL;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			func = get_func(format);

			if (func == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				char_count += 2;
			}
			else
			{
				char_count += func(args);
			}
		}
		else
		{
			_putchar(*format);
			char_count++;
		}
	}

	va_end(args);
	return (char_count);
}
