#include "main.h"
/**
 * cap_string - Capitalizes all words in a string
 * @str: The string to capitalize
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalize = 1;
		}
		else if (capitalize)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 'a' + 'A';
			}
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
