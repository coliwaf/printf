#include "main.h"

/**
 * print_lower_x - prints int in lowercase hex
 * @args: va_list containing int to print
 * Return: length of printed bytes
 */
int print_lower_x(va_list args)
{
	int len = 0;

	prnt_hex_low(va_arg(args, unsigned int), &len);
	return (len);
}
