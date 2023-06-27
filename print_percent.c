#include "main.h"

/**
 * print_percent - prints percent char
 * @args: va_list containing argument to print
 * Return: length of printed bytes
 */
int print_percent(va_list args)
{
	(void) args;

	_putchar('%'); 
	return (1);
}
