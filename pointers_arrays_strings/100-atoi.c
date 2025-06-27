#include <stdio.h>
#include "main.h"

/**
 * _atoi - Copies a string from source to destination.
 * @result: Pointer to the destination buffer.
 * @sign: Pointer to the source string.
 * @i: 
 * Return: Pointer to the destination buffer.
 */

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;


    while
	    (s[i] == ' ') 
    {
        i++;
    }

    while
	    (s[i] == '-' || s[i] == '+') 
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }


    while
	    (s[i] >= '0' && s[i] <= '9') 
    {
        result = result * 10 + (s[i] - '0');
	i++;
    }

    return result * sign;
}

