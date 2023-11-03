#include "main.h"


/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void ptr_addr;
	unsigned int i;

	if (ptr == NULL)
	{
		ptr_addr = malloc(new_size);
		return (pr_addr);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr_addr = malloc(new_size);
		if (ptr_addr != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)ptr_addr + i) = *((char *) ptr + i);
			free(ptr);
			return (ptr_addr);
		}
		else
			return (NULL);
	}
}
