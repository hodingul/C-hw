#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int num, i;
	int tf = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("It is not a prime number");
			tf = 1;
			break;
		}
	}
	if (tf != 1)
		printf("It is a prime number");
	return 0;
}