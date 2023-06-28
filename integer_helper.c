#include "main.h"

/**
 * print_number - print number stdout
 * @n: number to print
 * Return: 1 if successful
 */
int print_number(unsigned int n)
{
	unsigned int numb = n;
	int res;

	if (numb / 10)
		print_number(numb / 10);

	res = _putchar('0' + numb % 10);
	if (res == -1)
		return (res);
	return (res);
}
/**
 * count_length - count length of the number
 * @n: number to count
 * Return: the digits count
 */
int count_length(unsigned int n)
{
	int len;

	len = 0;

	for (; n > 0; len++)
		n /= 10;
	return(len);
}
