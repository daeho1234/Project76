#include <stdio.h>

void star(int a)
{
	for (int j = 1; j < a + 1; j++)
	{
		for (int i = 0; i < a - j; i++)
		{
			printf(" ");
		}
		for (int i = 0; i < j; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int a;
	scanf_s("%d", &a);
	star(a);
	return 0;
}