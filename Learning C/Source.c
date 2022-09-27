#include <stdio.h>
#include <math.h>

main()
{
	int any_integer =1005, n_digits = 0, digits = 0, temp;
	temp = any_integer;

		do
		{
			temp /= 10;
			n_digits += 1;
		} while (temp != 0);

		if (any_integer < 0)
		{
			putchar('-');
			any_integer *= -1;
		}

		for (int i = 1; i <= n_digits; i++)
		{
			if (i == 1) temp = any_integer;
			temp = temp - digits * pow(10, n_digits - i + 1);
			digits = temp / pow(10, n_digits - i);
			putchar(digits + '0');
		}
}