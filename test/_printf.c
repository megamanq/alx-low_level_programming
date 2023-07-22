#include "main.h"
#include <unistd.h>
#include <stdarg.h>

int strleng(char *str)
{
	while (*str)
	{
		return (1 + strleng(str + 1));
	}
	return 0;
}

int _printf(const char *format, ...)
{
	int i = 0, char_counter = 0;
	va_list args;
	unsigned int len;
	char *str, sc;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{	

				sc = (char)va_arg(args, int);
				str = &sc;
				write(1, str, i);
				i++;
				char_counter++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);
				len = strleng(str);
				write(1, str, len);
				char_counter++;
				i++;

			}
			else
			{
				write(1, &format[i], 1);
				char_counter++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			char_counter++;
		}
		i++;
	}

	va_end(args);
	return (char_counter);
}
