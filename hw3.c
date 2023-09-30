#include <stdio.h>

int main(void)
{
	int i = 0;
	int Blank, Star = 0;
	for (i = 1; i < 6; i++)
	{
		for (Blank = 5; Blank > i; Blank--)
		{
			printf(" ");
		}
		for (Star = 1; Star <= i * 2 - 1; Star++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}