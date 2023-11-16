#include <stdio.h>

/**
 * tortue - function executed before main
 * By Chuka Ozoadibe
 * Return: no return.
 */

void __attribute__ ((constructor)) tortue()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
