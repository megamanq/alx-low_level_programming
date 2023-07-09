#include "main.h"
/**
 * leet - encode str to 1337
 * @str: str to encod
 * Return: str
 */
char *leet(char *str)
{
	char letters[10] = "aAeEoOtTlL",
		codes[5] = "43071";
	int j, i = 0;

	while (str[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				int c = j / 2;

				str[i] = codes[c];
			}
		}
		i++;
	}
	return (str);
}
