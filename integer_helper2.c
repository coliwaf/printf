#include "main.h"

/**
 * prnt_hex_addr - prints address in lowercase hex
 * @ptr: address to the pointer
 * @len: length of printed bytes
 *
 * Description: this is almost similar to prnt_hex_low
 * but instead takes an unsigned long int
 */

void prnt_hex_addr(unsigned long int ptr, int *len)
{
	int res;

	if (ptr / 16)
		prnt_hex_low(ptr / 16, len);

	if (ptr / 16 < 10)
		res = _putchar('0' + (ptr % 16));
	else
		res = _putchar('a' + (ptr % 16));
	*len += res;
}
