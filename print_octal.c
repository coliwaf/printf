#include "main.h"

/**
 * print_octal - prints unsigned integers
 * @args: number parameter to print
 * Return: length of output
 */
int print_octal(va_list args)
{
	unsigned int dec = va_arg(args, unsigned int);
	int len = 0;
	/*unsigned int i;*/
	int res;

	res = prnt_octal(dec);

	if (res == 1)
		len += count_octal_length(dec);
	else
		len = -1 ;
	return (len);
}
