#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double Std(double* param)
{
	int i;
	double pv = 0, pstd = 0, pm = (param[0] + param[1] + param[2] + param[3] + param[4]) / 5;
	for (i = 0; i < 5; i++)
		pv += pow((param[i] - pm), 2);
	pv /= 5;
	pstd = sqrt(pv);
	return pstd;
}
int main(void)
{
	double arr[5];
	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("Standard Deviation = %lf", Std(arr));
	return 0;
}
