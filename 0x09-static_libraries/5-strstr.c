#include "main.h"
/**
 * _strstr - locat subs
 * @haystack: main striung
 * @needle: substr
 * Return: ptr or null
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
