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
	char word1[6] = "Hello";
	char word2[6] = "World";
	scanf_s("%d", &a);
	star(a);
	printf("%s %s \n",word1,word2);
	return 0;
}