#include "main.h"

/**
 * print_upper_X - prints int in Uppercase hex
 * @args: va_list containing int to print
 * Return: length of printed bytes
 */
int print_upper_X(va_list args)
{
	int len = 0;

	prnt_hex_up(va_arg(args, unsigned int), &len);
	return (len);
}
