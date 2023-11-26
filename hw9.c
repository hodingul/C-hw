#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}
int main(void)
{
	char str[100];
	int ch, i = 0;
	
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = 0;
	printf("Output> ");
	while (str[i] != 0)
	{
		ch = convCase(str[i]);
		putchar(ch);
		i++;
	}
	return 0;
}