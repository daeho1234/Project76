#include <stdio.h>

int main()
{
	for (int j = 1; j < 6; j++)
	{
		for (int i = 0; i < j; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}