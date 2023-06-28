#include "main.h"

/**
 * print_decimal - prints decimal numbers
 * @args : number parameter to print
 * Return : length of output
 */

int print_decimal(va_list args)
{
	int dec = va_arg(args, int);
	int len = 0;
	unsigned int i;
	int res;

	if (dec == 0)
	{
		_putchar('0');
		return (1);
	}
	
	if (dec < 0 && dec != 0)
	{
	_putchar(-);
	len += 1;
	i = -dec;
	}
	
	else
	i = dec;
	res = print_number(i);
	if (res == 1)
	len += count_length(i);
	
	else
	len = -1;
	return (len);
}	
