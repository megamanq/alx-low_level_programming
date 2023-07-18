#include "main.h"
/**
 * _strspn - get the lengh of prefix
 * @s: string to trait
 * @accept: segment to search
 *
 *Return: lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		int match = 0, j;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				match = 1;
				break;
			}
		}
		if (!match)
		{
			break;
		}
		i++;
	}
	return (i);
}
