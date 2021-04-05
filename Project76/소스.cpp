#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool b1 = true;
	bool b2 = false;
 	printf("int의 크기: %d\n", sizeof(int));
	printf("int의 크기: %d\n", sizeof(bool));
	printf("%d\n", true && true);
	printf("%d\n", true && false);
	printf("%d\n", false && true);
	printf("%d\n", false && false);

	printf("%d\n", true || true);
	printf("%d\n", true || false);
	printf("%d\n", false || true);
	printf("%d\n", false || false);

	printf(b1 ? "true" : "false");
	printf("\n");
	printf(b2 ? "true" : "false");
	printf("\n");

	printf("%s\n", b1 ? "true" : "false");
	printf("%s\n", b2 ? "true" : "false");

	return 0;
}