#include "main.h"
/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to capitalize
 * Return: The capitalized string
 */
char *cap_string(char *str)
{
	char a[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i = 0;
	int capitalize = 1;

	while (str[i])
	{
		int j = 0;

		for (j = 0; j <= 13; j++)
		{
			if (str[i] == a[j])
			{
				capitalize = 1;
			}
			else if (capitalize)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - ('a' - 'A');
				}
				capitalize = 0;
			}
		}	
		i++;
	}
	return str;
}
