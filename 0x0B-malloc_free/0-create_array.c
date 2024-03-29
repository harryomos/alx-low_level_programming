#include "main.h"

/**
* *create_array - creates an array of chars
*and initializes it with a specific char.
*@size: size of the array
*@c: character to initialized
*Return: 0 if size is zero, otherwhise a ponter to the array or null if fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
