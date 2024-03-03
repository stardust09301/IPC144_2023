/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #6 (P1)
Full Name  : Jenna Moon
Student ID#: 134957224
Email      : jmoon32@myseneca.ca
Section    : NCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX_NUMBER_OF_ITEMS 10
#define MIN_NUMBER_OF_ITEMS 1

int main(void) 
{	//costant declarations
	const double MAX_INCOME = 400000.00;
	const double MIN_INCOME = 500.00;

	const double MIN_COST = 100.00;
	const int MIN_PRIORITY = 1;
	const int MAX_PRIORITY = 3;
	const char YES = 'y';
	const char NO = 'n';

	//variable declarations
	double income;
	int numOfTItems;
	int i;
	double cost[MAX_NUMBER_OF_ITEMS];
	int priority[MAX_NUMBER_OF_ITEMS];
	char finance[MAX_NUMBER_OF_ITEMS];
	double total_cost = 0;
	int valid;

	//title
	printf("+--------------------------+\n");
	printf("+   Wish List Forecaster   |\n");
	printf("+--------------------------+\n");
	printf("\n");

	//Get the income
	do {
		valid = 1;// initialization
		printf("Enter your monthly NET income: $");
		scanf("%lf", &income);
		if (income < MIN_INCOME) {
			valid = 0;
			printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n", MIN_INCOME);
			printf("\n");
		}
		if (income > MAX_INCOME) {
			valid = 0;
			printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n", MAX_INCOME);
			printf("\n");
		}
	} while (valid == 0); //!valid

	printf("\n");
	//Get the number of items
	do {
		valid = 1;
		printf("How many wish list items do you want to forecast?: ");
		scanf(" %d", &numOfTItems);
		if (numOfTItems<MIN_NUMBER_OF_ITEMS || numOfTItems>MAX_NUMBER_OF_ITEMS) {
			valid = 0;
			printf("ERROR: List is restricted to between %d and %d items.\n", 
					MIN_NUMBER_OF_ITEMS, MAX_NUMBER_OF_ITEMS);
			printf("\n");
		}
	} while (valid == 0);


	for (i = 0; i < numOfTItems; i++) {
		printf("\n");
		printf("Item-%d Details:\n", i + 1); // since it always starts from 0

		//get the cost
		do {
			valid = 1;
			printf("   Item cost: $");
			scanf("%lf", &cost[i]);
			if (cost[i] < MIN_COST) {
				valid = 0;
				printf("      ERROR: Cost must be at least $%.2lf\n", MIN_COST);
			}
		} while (valid == 0); //!valid

		//get priority
		do {
			valid = 1;
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
			scanf("%d", &priority[i]);
			if (priority[i]<MIN_PRIORITY || priority[i]>MAX_PRIORITY) {
				valid = 0;
				printf("      ERROR: Value must be between %d and %d\n", MIN_PRIORITY, MAX_PRIORITY);
			}
		} while (!valid); // valid == 0

		//get financing option
		do {
			valid = 1;
			printf("   Does this item have financing options? [y/n]: ");
			scanf(" %c", &finance[i]);
			if (finance[i] != YES && finance[i] != NO) {
				valid = 0;
				printf("      ERROR: Must be a lowercase \'y\' or \'n\'");
				printf("\n");
			}
		} while (!valid);
	}
		//print report
		printf("\n");
		printf("Item Priority Financed        Cost\n");
		printf("---- -------- -------- -----------\n");
		
		for (i = 0; i < numOfTItems; i++) {
			printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], finance[i], cost[i]);
			total_cost += cost[i];
		}

		printf("---- -------- -------- -----------\n");
		printf("                      $%11.2lf\n\n", total_cost);
		printf("Best of luck in all your future endeavours!\n");

		return 0;
	}
