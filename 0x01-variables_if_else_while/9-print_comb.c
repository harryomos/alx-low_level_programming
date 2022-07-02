#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and prnt the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{

		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);/*this is an ansii code for new line*/

	return (0);
}
