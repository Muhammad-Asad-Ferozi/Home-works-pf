//program to differ area of two circles by inputting radius using 'if' condition
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//Defining the variables
	float radius1, radius2;
	float areaCircle1, areaCircle2;
	
	//Getting values
	printf("Kindly enter the radius of first circle: ");
	scanf("%f", &radius1);
	printf("Kindly enter the radius of second circle: ");
	scanf("%f", &radius2);

	//Performing calculatuions
	areaCircle1 = 3.14 * (radius1 * radius1);
	areaCircle2 = 3.14 * (radius2 * radius2);

	//Showing results
	if (areaCircle1 > areaCircle2)
	{
		printf("Area of first circle is: %.1f\n", areaCircle1);
		printf("Area of second circle is: %.1f\n", areaCircle2);
		printf("Thus, the area of first circle is grater than area of second circle.");
	}
	else if (areaCircle1 < areaCircle2)
	{
		printf("Area of first circle is: %.1f\n", areaCircle1);
		printf("Area of second circle is: %.1f\n", areaCircle2);
		printf("Thus, the area of second circle is grater than area of first circle.");
	}
	else
	{
		printf("Area of first circle is: %.1f\n", areaCircle1);
		printf("Area of second circle is: %.1f\n", areaCircle2);
		printf("Thus, the area of both circles are same.");
	}

	return 0;
}