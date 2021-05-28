#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTS 10000000L
int list[MAX_ELEMENTS];
int count;

int search_binary(int key, int low, int high)
{
	int middle;

	count = 0;
	while (low <= high) {
		count++;
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			low = middle + 1;
		else
			high = middle - 1;
	}
	return -1;
}

int seqsearch(int list[], int n, int searchnum)
{
	int i;

	count = 0;
	for (i = 0; i < n; i++) {
		count++;
		if (searchnum == list[i])
			return i;
	}
	return -1;
}

int main()
{
	int n, b;
	int a[20];
	int search_number;
	int return_value;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		list[i] = a[i];
	}
	scanf_s("%d", &search_number);

	return_value = seqsearch(list, n, search_number);

	printf("%d\n", count);
	return_value = search_binary(search_number, 0, n);
	printf("%d\n", count - 1);
	return 0;
}
