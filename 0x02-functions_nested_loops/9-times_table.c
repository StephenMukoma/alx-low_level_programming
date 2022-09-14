#include "main.h"
/**
*times_table - 9 timestable
*
*/
void times_table(void)
{
	int count, CI, num, out, ref;

	CI = 0;

	for (count = 0; count <= 9; count++)
	{
		_putchar(48);
		for (num = 0; num < 9; num++)
		{
			ref = count;
			out = ref + (CI * num);
			if (out <= 9)
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar (out + 48);
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar((out / 10) + 48);
				_putchar ((out % 10) + 48);
			}
		}
		CI = CI + 1;
		_putchar('\n');
	}
}
