#include "main.h"

/**
 *  _islower - Check lowercase character
 *  Description : function that prints the alphabet lowercase.
 *  @c : number to be checked.
 *  Return: to 1 if lowercase, if not return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
