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
	};

	for (i = 0; symbols[i].specifier; i++)
	{
		if (*definer == symbols[i].specifier[0])
			return (symbols[i].print);
	}
	return (0);
}
