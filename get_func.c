#include "main.h"

/**
 * get_func - link identifier to chosen function
 * @definer: the identifying character
 * Return: required print function
 */
int (*get_func(const char *definer))(va_list)
{
	int i;

	format_t symbols[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_decimal},
		{"b", print_binary},
		{"S", print_String},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_lower_x},
		{"X", print_upper_X},
		{"S", print_String},
	};

	for (i = 0; symbols[i].specifier; i++)
	{
		if (*definer == symbols[i].specifier[0])
			return (symbols[i].print);
	}
	return (0);
}
