#include "main.h"
/**
 * _memset - filling a block of memory with a specific value
 * @s: starting memory address position
 * @b: the desired value
 * @n: number of changed bytes
 *
 * Return: for every n bytes, change the array with the new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
