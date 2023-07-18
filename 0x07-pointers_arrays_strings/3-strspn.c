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
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		int j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				j++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
	}
	return (i);
}
