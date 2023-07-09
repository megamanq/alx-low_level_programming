#include "main.h"
/**
 * rot13 - encode str by rot13
 * @str: str to encod
 * Return: str
 */
char *rot13(char *str)
{
	char alf[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
		rot[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int j, i = 0;

	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alf[j])
			{
				str[i] = rot[j];
			}
		}
		i++;
	}
	return (str);
}
