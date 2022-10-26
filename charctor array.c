#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
#define SIZE2 20
void toUpper(char ch[])
{
	int i = 0;
	char temp;
	do
	{
		temp = ch[i];
		temp = temp - 32;
		ch[i] = temp;
		i++;
	} while (ch[i] != '\0');
	printf("%s", ch);
}
void toLower(char ch[])
{
	int i = 0;
	char temp;
	do
	{
		temp = ch[i];
		temp = temp + 32;
		ch[i] = temp;
		i++;
	} while (ch[i] != '\0');
	printf("%s", ch);
}
int merge(char m[], char ch1[], char ch2[])
{
	int i = 0;
	int j = 0;
	int flag = 0;
	char temp;
	do
	{
		m[j] = ch1[i];
		j++;
		m[j] = ch2[i];
		j++;
		i++;
		if (ch1[i] == '\0')
		{
			flag = 1;
			while (ch2[i] != '\0')
			{
				m[j] = ch2[i];
				j++;
				i++;
			}
			flag = 2;
		}
		else if (ch2[i] == '\0')
		{
			flag = 1;
			while (ch1[i] != '\0')
			{
				m[j] = ch1[i];
				j++;
				i++;
			}
			flag = 2;
		}
	} while (flag != 2);
	m[j] = '\0';
	printf("%s", m);
}
int main()
{
	char arr1[SIZE], arr2[SIZE];
	char m[SIZE2];
	printf("Enter the first array: ");
	scanf("%s", arr1);
	printf("Enter the Second array: ");
	scanf("%s", arr2);
	merge(m, arr1, arr2);
}