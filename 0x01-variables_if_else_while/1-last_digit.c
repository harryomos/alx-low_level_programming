#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastn = n % 10;
	if (lastn > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", 0, lastn);
	}
	if (lastn == 0)
		{
			printf("last digit of %d and is 0\n", 0, lastn);
		}
		else
		{
			printf("last digit of %d and is less than 6 and not 0\n", 0, lastn);
		}

		printf("\n");

		return (0);
}
