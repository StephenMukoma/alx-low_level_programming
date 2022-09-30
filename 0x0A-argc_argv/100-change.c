#include <stdio.h>
#include <stdlib.h>
/**
*change - determines minimum coins for change
*
*@num: total change
*/
void change(int num)
{
	int cents;

	cents = 0;
	while (num != 0)
	{
		while (num != 0)
		{
			if (num >= 25)
			{
				num -= 25;
				cents++;
				break;
			}
			else if (num >= 10)
			{
				num -= 10;
				cents++;
				break;
			}
			else if (num >= 5)
			{
				num -= 5;
				cents++;
				break;
			}
			else if (num >= 2)
			{
				num -= 2;
				cents++;
				break;
			}
			else if (num >= 1)
			{
				num -=  1;
				cents++;
				break;
			}
		}
	}
	printf("%d\n", cents);
}


/**
*main - prints minumum number of coins for change
*
*@argc: argument count
*@argv: argument vector
*
*Return: 0 (success) else 1
*/
int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	change(num);
	return (0);
}
