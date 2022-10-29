/*program to input the priceand give discount of 15 % of purachaze is grater than 5000 else give 10 % discount usinf 'if' condition */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	// defining variables
	signed int price, discount, payablePrice;

	//Enter the values
	printf("please enter the amount of purchase: ");
	scanf("%d", &price);

	//perforiming calculation and showing results
	if (price >= 5000)
	{

		discount = 0.15 * price;
		printf("You get the discount of 15%% which is: %d\n", discount);
		payablePrice = price - discount;
		printf("Your payable price is: %d", payablePrice);
	}
	else
	{
		discount = 0.1 * price;
		printf("You get the discount of 10%% which is: %d\n", discount);
		payablePrice = price - discount;
		printf("Your payable price is: %d", payablePrice);
	}
	return 0;
}