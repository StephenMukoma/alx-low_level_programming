#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */


/* betty style doc for function main goes there */

int main(void)

{

		int n, lastlast;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					lastlast = n % 10;
					if (lastlast > 5)
					{
						printf("Last digit of %d is %d and is greater than 5\n", n, lastlast);
					}
					else if (lastlast == 0)
					{
						printf("Last digit of %d is %d and is 0\n", n, lastlast);
					}
					else
					{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastlast);
					}
					return (0);

}
