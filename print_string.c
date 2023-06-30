#include "main.h"

/**
 * print_String - prints non-printable chars in ASCII
 * code values
 * @args: va_list containing element to print
 * Return: length of the string
 */
int print_String(va_list args)
{
	int len;
	int i, j;
	char *str = va_arg(args, char *);
	char chr = 'A' - ':';
	char hex[3];

	len = 0;
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] > 126)
		{
			puts_str("\\x");
			len += 2;
			hex[0] = str[i] / 16;
			hex[1] = str[i] % 16;
			for (j = 0; j < 2; j++)
			{
				if (hex[j] >= 10)
					_putchar('0' + chr + hex[j]);
				else
					_putchar('0' + hex[j]);
			}
			len += j;
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
/**
 * puts_str - prints a string line to stdout
 * @str: string param
 */

void puts_str(char *str)
{
	unsigned int i ;
	for (i = '0'; str[i] != '\0'; i++)
		_putchar(str[i]);
}
