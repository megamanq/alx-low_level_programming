#include "main.h"
/**
 * _strlen_recursion - get len of str
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
/**
 * check_palindrome - check if palindrome
 * @i:int
 * @j:int
 * @s: str
 * Return: int
 */
int check_palindrome(int i, int j, char *s)
{
	if (i >= j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (check_palindrome(i + 1, j - 1, s));
}
/**
 * is_palindrome - get if str palindrome
 * @s:str
 * Return: int
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s) - 1;
	return (check_palindrome(0, i, s));
}
