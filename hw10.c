#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct NCP
{
	char Name[20];
	char Country[20];
	int Population;
};
int main(void)
{
	struct NCP arr[3];
	int i;

	printf("Input three cities \n");
	for (i = 0; i < 3; i++)
	{
		printf("Name> "); 
		scanf(" %[^\n]s", arr[i].Name);
		printf("Country> "); 
		scanf(" %[^\n]s", arr[i].Country);
		printf("Population> "); 
		scanf(" %d", &arr[i].Population);
	}
	printf("\n");
	printf("Printing the three cities: \n");
	for (i = 0; i < 3; i++)
	{
		printf("1. %s in %s with a population of %d people \n", arr[i].Name, arr[i].Country, arr[i].Population);
	}
	return 0;
}