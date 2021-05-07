#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

void bubble_sort(int list[], int n)
{
	int i, j, temp;
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
			if (list[j] > list[j + 1]) {
				SWAP(list[j], list[j + 1], temp);
				for (int i = 0; i < 5; i++)
					printf("%d ", list[i]);
				printf("\n");
			}
	}
}

int main(void)
{
	int a[15] = { 15,10,14,20,31,1,17,11,18,12,6,8,100,23,21 };

	bubble_sort(a, 11);
	return 0;
}
