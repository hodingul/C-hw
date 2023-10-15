#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>


int change(int num)
{
	if (num == 0 || num == 1)
		printf("%d", num);
	else
	{
		change(num / 2);
		printf("%d", num % 2);
	}
	return 0;
}
int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	change(num);
	return 0;
}