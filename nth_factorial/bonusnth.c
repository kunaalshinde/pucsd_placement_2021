/* Program to calculate nth number in fibonacci series */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int nth_Fibonacci(int n)
{
	n *= 3; 
	long int tab[n+2];
	memset(tab, 0, sizeof(tab));
	tab[0] = 0;
	tab[1] = 1;
	for(int i = 2; i <= n; i++)
		tab[i] = tab[i-1] + tab[i-2];

	return tab[n];
}


int main(int argc, char *argv[])
{
	printf("%ld \n", nth_Fibonacci(atoi(argv[1])));
	return 0;
}
