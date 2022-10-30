#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int choice;
	int numYears, totalCharges;

	printf("Press 1 for adult.\n");
	printf("Press 2 for child.\n");
	printf("Press 3 for senior.\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("Enter the number of years of contract: ");
		scanf("%d", &numYears);
		totalCharges = numYears * 30;
		printf("Total number of charges: %d", totalCharges);
	}
	else if (choice == 2)
	{
		printf("Enter the number of years of contract: ");
		scanf("%d", &numYears);
		totalCharges = numYears * 10;
		printf("Total number of charges: %d", totalCharges);
	}
	else if (choice == 3)
	{
		printf("Enter the number of years of contract: ");
		scanf("%d", &numYears);
		totalCharges = numYears * 20;
		printf("Total number of charges: %d", totalCharges);
	}
	else
	{
		printf("invalid number: ");
	}
	return 0;
}