#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1: first str
 * @s2: second str
 * Return: integr
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0, i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			res += 0;
		else
		{
			res = s1[i] - s2[i];
			return (res);
		}
		i++;
	}
	return (res);
}
