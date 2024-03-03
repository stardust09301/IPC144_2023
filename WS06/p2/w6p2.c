
/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #6 (P2)
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
#define SELECTION_ALL 1
#define SELECTION_PRIOR 2
#define SELECTION_QUIT 0

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
	double cost[MAX_NUMBER_OF_ITEMS];
	double total_cost = 0, priority_cost; 

	int numOfItems, selection, note, years, months, remainMonths, pFilter; 

	int i;
	int priority[MAX_NUMBER_OF_ITEMS];
	char finance[MAX_NUMBER_OF_ITEMS];
	int valid;
	int prior_note;

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
	//Ask the number of items
	do {
		valid = 1;
		printf("How many wish list items do you want to forecast?: ");
		scanf(" %d", &numOfItems);
		if (numOfItems < MIN_NUMBER_OF_ITEMS || numOfItems > MAX_NUMBER_OF_ITEMS) {
			valid = 0;
			printf("ERROR: List is restricted to between %d and %d items.\n",
				MIN_NUMBER_OF_ITEMS, MAX_NUMBER_OF_ITEMS);
			printf("\n");
		}
	} while (valid == 0);

	for (i = 0; i < numOfItems; i++) {
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
		} while (valid == 0);

		//get priority
		do {
			valid = 1;
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
			scanf("%d", &priority[i]);
			if (priority[i] < MIN_PRIORITY || priority[i] > MAX_PRIORITY) {
				valid = 0;
				printf("      ERROR: Value must be between %d and %d\n", MIN_PRIORITY, MAX_PRIORITY);
			}
		} while (!valid);

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

	for (i = 0; i < numOfItems; i++) {
		printf("%3d  %5d    %5c    %11.2lf\n",
			i + 1, priority[i], finance[i], cost[i]);
		total_cost += cost[i];

		if (finance[i] == YES) {
			note = 1;
			prior_note = 1;
		}
	}
	printf("---- -------- -------- -----------\n");
	printf("                      $%11.2lf\n\n", total_cost);

	do {
		valid = 0;
		printf("How do you want to forecast your wish list?\n");
		printf(" %d. All items (no filter)\n", SELECTION_ALL);
		printf(" %d. By priority\n", SELECTION_PRIOR);
		printf(" %d. Quit/Exit\n", SELECTION_QUIT); 
		printf("Selection: ");
		scanf("%d", &selection);
		printf("\n");

		if (selection == SELECTION_QUIT) {
			valid = 0;
		} else if (selection == SELECTION_ALL) {
			printf("====================================================\n");
			printf("Filter:   All items\n");
			printf("Amount:   $%.2lf\n", total_cost);
			// Calculating financing
			months = (int)(total_cost / income) + 1; // rounding
			years = ((int)months) / 12;
			remainMonths = (months - (years * 12)); // rounding 
			printf("Forecast: %d years, %d months\n",
				years, remainMonths);

			if (note == 1) {
				printf("NOTE: Financing options are available on some items.\n");
				printf("      You can likely reduce the estimated months.\n");
			}
			printf("====================================================\n");
			printf("\n");

			valid = 1;
		} else if (selection == SELECTION_PRIOR) {
			priority_cost = 0;
			prior_note = 0;

			printf("What priority do you want to filter by? [1-3]: ");
			scanf("%d", &pFilter);

			for(i = 0; i < numOfItems; i++) {
				if (priority[i] == pFilter) {
					priority_cost += cost[i];
					months = (int)(priority_cost / income) + 1; // rounding 
					years = ((int)months) / 12; 
					remainMonths = (months - (years * 12)); // rounding 

					if (finance[i] == YES){
						note = 1;
						prior_note = 1;
					}
				}
			}
			printf("\n");
			printf("====================================================\n");
			printf("Filter:   by priority (%d)\n", pFilter);
			printf("Amount:   $%.2lf\n", priority_cost);
			printf("Forecast: %d years, %d months\n", (int)years, (int)remainMonths);

			// Combine two logic as it has only one action (prior_note == 1 && note)
			if(prior_note == 1) {
				if (note) {
					printf("NOTE: Financing options are available on some items.\n");
					printf("      You can likely reduce the estimated months.\n");
				}
			}
				printf("====================================================\n");
				printf("\n");
				valid = 1;
			} else {
				printf("ERROR: Invalid menu selection.\n");
				printf("\n");
				valid = 1;
			}
		} while (valid == 1);
		printf("Best of luck in all your future endeavours!\n");
		return 0;
}
