#include "main.h"

/**
 * prnt_hex_low - print number in lowercase hex
 * @n: number to print
 * @len: length of returned hex
 */
void prnt_hex_low(unsigned int n, int *len)
{
	int result;

	if (n / 16)
		prnt_hex_low(n / 16, len);
	if (n % 16 < 10)
		result = _putchar('0' + n % 16);
	else
		result = _putchar('a' + (n % 16) - 10);

	*len += result;
}

/**
 * print_hex_up - print number in upper hex
 * @n: number to print
 * @len: length of returned hex
 */
void prnt_hex_up(unsigned int n, int *len)
{
	int result;

	if (n / 16)
		prnt_hex_up(n / 16, len);
	if (n % 16 < 10)
		result = _putchar('0' + n % 16);
	else
		result = _putchar('A' + (n % 16) - 10);
	*len += result;
}

/**
 * prnt_hex_addr - prints address in lowercase hex
 * @p: address to the pointer
 * @len: length of printed bytes
 *
 * Description: this is almost similar to prnt_hex_low
 * but instead takes an unsigned long int
 */

void prnt_hex_addr(unsigned long int p, int *len)
{
	int res;

	if (p / 16)
		prnt_hex_low(p / 16, len);

	if ((p % 16) < 10)
		res = _putchar('0' + (p % 16));
	else
		res = _putchar('a' + (((p) % 16) - 10));
	*len += res;
}
