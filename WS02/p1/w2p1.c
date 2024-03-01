/*
*****************************************************************************
 <assessment name example: Workshop - #2 (Part-1)>
Full Name :Jenna Moon
Student ID#:134957224
Email :jmoon32@myseneca.ca
Section :NCC
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	double price_small, price_medium, price_large;
	int number;
	int sub_total, taxes, total;
	const double TAX = 0.13;
	printf("Set Shirt Prices\n");
	printf("================\n");

	printf("Enter the price for a SMALL shirt: $");
	scanf("%lf", &price_small);
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%lf", &price_medium);
	printf("Enter the price for a LARGE shirt: $");
	scanf("%lf", &price_large);
	printf("\n");

	printf("Shirt Store Price List\n");
	printf("======================\n");
	printf("SMALL  : $%.2lf\n", price_small);
	printf("MEDIUM : $%.2lf\n", price_medium);
	printf("LARGE  : $%.2lf\n", price_large);
	printf("\n");
	printf("Patty's shirt size is 'S'\n");
	printf("Number of shirts Patty is buying: ");
	scanf("%d", &number);
	
	sub_total = number * price_small * 100+0.5;
	taxes = sub_total * TAX+0.5;
	total = sub_total + taxes;
	
	printf("\n");
	printf("Patty's shopping cart...\n");
	printf("Contains : %d shirts\n", number);
	printf("Sub-total: $%8.4lf\n", (double)sub_total/100 );
	printf("Taxes    : $%8.4lf\n", taxes /100.0);
	printf("Total    : $%8.4lf\n", (double)total /100);


	return 0;
}