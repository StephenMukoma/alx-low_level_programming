#include "main.h"
/**
 * _islower - check lowercase
 *
 * @c: integer parameter
 *
 * Return: 1 (Success), else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
