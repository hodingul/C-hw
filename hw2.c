#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>

int main(void)
{
	double km;
	printf("Please enter kilometers: ");
	scanf("%lf", &km);
	printf("%.1lf km is equal to %.1lf miles", km, km / 1.609);
}