#include <stdio.h>
#include <math.h>
main()
{
	int any_integer = 18896423, power = 1, n_digits = 0, digits = 0, temp;
	do
	{
		temp = any_integer / pow(10, power);
		n_digits += 1;
		power += 1;
	} while (temp != 0);

	if (any_integer < 0)
	{
		putchar('-');
		any_integer *= -1;
	}
	temp = any_integer;
	
	for (int i = 1; i <= n_digits; i++)
	{
		temp = temp - digits * pow(10, n_digits - i + 1);
		digits = temp / pow(10, n_digits - i);
		putchar(digits + '0');
	}
}