#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Take the array of numbers - apply a action for each number.
 * @array: Pointer of an array.
 * @size: Size of numbers in the array.
 * @action: Function pointer.
 *
 * Return: Nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t (i);

if (array == NULL || size == 0)
return;

for (i = 0; i < size ; i++)
{
action(array[i]);

}
}
