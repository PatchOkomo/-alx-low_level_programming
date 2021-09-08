#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int temp;
	int begin;
	int end;

	end= n - 1; /* omit null terminator in length */
	begin = 0;
	while (begin < end)
	{
		temp = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = temp;
		begin++, end--;
	}
}
