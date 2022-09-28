#include "main.h"
/**
*palindromefn - cet if string is palindrome
*
*@i: index of first character
*@s:pointer to string
*@strlen: string length
*@j: index of last character
*
*Return: 1 if palindrome else 0
*/
int palindromefn(int i, char *s, int strlen, int j)
{
	if (i >= strlen)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (palindromefn(++i, s, strlen, --j));
	}
}
/**
*_strlen_recursion - calculate string length
*
*@s: pointer to string
*
*Return: string length
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}
/**
*is_palindrome - det if string is palindrome
*
*@s: pointer to string
*
*Return: 1 if palindrome else 0
*/
int is_palindrome(char *s)
{
	return (palindromefn(0, s, _strlen_recursion(s), (_strlen_recursion(s) - 1)));
}
