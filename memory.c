#include "shell.h"

/**
 * Return
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	} 
	return (0);
}


