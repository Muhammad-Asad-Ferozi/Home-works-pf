#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char symbol;
	printf("Enter the symbol: ");
	scanf("%c", &symbol);

	if (symbol >= 48 && symbol <= 57)
	{
		printf("this is a intiger");
	}
	else if (symbol >= 97 && symbol <= 122)
	{
		printf("this is a lower case alphabet");
	}
	else if (symbol >= 65 && symbol <= 90)
	{
		printf("this is a uppercase case alphabet");
	}
	else
	{
		printf("invalid number:");
	}

	return 0;
}