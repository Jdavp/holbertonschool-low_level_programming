#include <stdio.h>
/**
 *main - print numbers 1 to 100 with fizz buzz
 *
 *Return: 0 succesfull
 *
 */

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 5 != 0 && num % 3 != 0)
			printf("%d", num);
		if (num % 3 == 0)
			printf("Fizz");
		if (num % 5 == 0)
			printf("Buzz");
		if (num < 100)
			printf(" ");
		if (num == 100)
		putchar('\n');
		num++;
	}
	return (0);
}
