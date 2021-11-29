/* Balance partitioning of an array */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int balance_partitioning(int n)
{
	if(n <= 0)
		return -1;
	int array[n];
	int sum = 0;
	int index, min = INT_MAX;

	for(int i = 0; i < n ; i++)
	{
		array[i] = 2 * i + 4;
		sum += array[i];
	}
	int left = 0;
	int right = sum - array[0];

	for(int i = 1; i < n-1; i++)
	{
		left += array[i-1];
		right -= array[i];
		int diff = abs(left - right);
		if(diff < min)
		{
			if(diff == 0)
				return i+1;
			min = diff;
			index = i+1;
		}
	}
	return index;
}

int main(int argc, char *argv[])
{
	printf("%d\n", balance_partitioning(atoi(argv[1])));
	return 0;
}
