#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, arr[5];

	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Odd numbers: ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (arr[i] % 2 != 0)
			printf("%d ", arr[i]);
	printf("\n");
	printf("Even numbers: ");
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);
	return 0;
}