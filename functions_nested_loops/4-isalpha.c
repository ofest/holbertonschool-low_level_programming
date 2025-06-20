#include "main.h"

/**
 *  _isalpha - Check lowercase or the uppercase character.
 *  Description : function that prints the alphabet lowercase and uppercase.
 *  @c : number to be checked.
 *  Return: to 1 if lowercase, if not return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
