#include "main.h"

/**
 * _strcpy -> copiar of certain number of the variable
 * @dest:this the destiny
 * @src: this is the copia
 * Return: This is return copy
 */
char *_strcpy(char *dest. char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
