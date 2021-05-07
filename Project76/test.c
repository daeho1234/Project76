#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

typedef struct li
{
	int first;
	int key;
}li;
void bubble_sort(li list[], int n)
{
	int i, j, temp;
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
			if (list[j].first > list[j + 1].first) {
				SWAP(list[j].first, list[j + 1].first, temp);
				SWAP(list[j].key, list[j + 1].key, temp);
			}
	}
}

int main(void)
{
	li a[10];
	int n;
	scanf_s("%d",&n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i].key);
	for (int i = 0; i < n; i++) {
		if (a[i].key == 10)
		{
			a[i].first = 1;
		}
		else
		a[i].first = a[i].key;
	}

	bubble_sort(a, n);
	for (int k = n-1; k>=0; k--)
	{
		printf("%d",a[k].key);
	}
	return 0;
}