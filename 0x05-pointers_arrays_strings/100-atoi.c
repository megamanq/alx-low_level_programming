#include "main.h"
#include "2-strlen.c"
/**
 * _atoi - main function
 *
 * description: convert a string to an integer
 * @s: string to conbvert
 *
 * Return: the int
 */
int _atoi(char *s)
{
	int i = 0, res = 0, sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] <= '9' && s[i] >= '0')
		{
			res = (res * 10) + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		i++;
	}
	return (sign * res);
}
