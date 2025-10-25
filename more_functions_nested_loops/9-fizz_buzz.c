#include <stdio.h>

/**
 * main - entry point
 * Description: Prints 1-100, unless they're multiples of 3 and 5
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
	}
	return (0);
}

