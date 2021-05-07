#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

void insertion_sort(int a[])
{
	int i, j, key;
	for (i = 1; i < SIZE; i++)
	{
		key = a[i];
		for (j = i - 1; j >= 0 && a[j] > key; j--)
			a[j + 1] = a[j];
		a[j + 1] = key;
	}
}

void main()
{
	int list[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
		list[i] = rand() % 100;

	insertion_sort(list);
	for (int i = 0; i < SIZE; i++)
		printf("[%d] ", list[i]);
}