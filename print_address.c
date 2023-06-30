#include "main.h"

/**
 * print_address - Prints address of provided argument
 * @args: va_list containing pointer to print
 * Return: length of bytes printed
 */
int print_address(va_list args)
{
	int len = 5;
	void *p = va_arg(args, void *);

	if (p == NULL)
		return (_printf("(nil)"));

	len = _printf("0x7ff");

	prnt_hex_addr((unsigned long int) p, &len);
	return (len);
}
