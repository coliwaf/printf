#include "main.h"

/**
 * _putchar - prints char to stdout
 * @c: char to print
 * Return: 0
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
