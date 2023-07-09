#include "main.h"
/**
 * rot13 - encode str by rot13
 * @str: str to encod
 * Return: str
 */
char *rot13(char *str)
{
	char alf[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
		rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;

	while (str[i])
	{
		int j;

		for (j = 0; alf[j] != '\0'; j++)
		{
			if (str[i] == alf[j])
			{
				str[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
