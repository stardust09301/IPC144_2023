/*
*****************************************************************************
						  Workshop - #4 (P2)
Full Name  : Jenna Moon
Student ID#: 134957224
Email      : jmoon32@myseneca.ca
Section    : NCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//Decalre variables
	int apples, oranges, pears, tomatoes, cabbages;
	int pickedNumber, keepPicking, outerCount;

	//big loop
	do
	{
		printf("Grocery Shopping\n");
		printf("================\n");
		do {
			//question for APPLES
			printf("How many APPLES do you need? : ");
			scanf(" %d", &apples);
			//if invalid numbers, print the error
			if (apples < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\n");
			}
		} while (apples < 0);
		printf("\n");

		do {
			//question for ORANGES
			printf("How many ORANGES do you need? : ");
			scanf(" %d", &oranges);
			//if invalid numbers, print the error
			if (oranges < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\n");
			}
		} while (oranges < 0);
		printf("\n");

		do {
			//question for PEARS
			printf("How many PEARS do you need? : ");
			scanf(" %d", &pears);
			//if invalid numbers, print the error
			if (pears < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\n");
			}
		} while (pears < 0);
		printf("\n");

		do {
			//question for TOMATOES
			printf("How many TOMATOES do you need? : ");
			scanf(" %d", &tomatoes);
			//if invalid numbers, print the error
			if (tomatoes < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\n");
			}
		} while (tomatoes < 0);
		printf("\n");

		do {
			//question for CABBAGES
			printf("How many CABBAGES do you need? : ");
			scanf(" %d", &cabbages);
			//if invalid numbers, print the error
			if (cabbages < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\n");
			}
		} while (cabbages < 0);

		//Pick products
		printf("\n");
		printf("--------------------------\n");
		printf("Time to pick the products!\n");
		printf("--------------------------\n\n");

		//initialization
		pickedNumber = 0, keepPicking = 1, outerCount = 1;
		//Picking apples
		if (apples > 0)
		{
			do {
				printf("Pick some APPLES... how many did you pick? : ");
				scanf(" %d", &pickedNumber);

				if (pickedNumber <= 0) {
					printf("ERROR: You must pick at least 1!\n");
					keepPicking = 1;
				} else if (apples - pickedNumber < 0) {
					printf("You picked too many... only %d", apples);
					printf(" more APPLE(S) are needed.\n");
					keepPicking = 1;
				} else if (apples - pickedNumber > 0) {
					printf("Looks like we still need some APPLES...\n");
					//update: subtracts the apples you picked from the apples you needed
					apples -= pickedNumber;
					keepPicking = 1;
				} else if (apples == pickedNumber) {
					printf("Great, that's the apples done!\n\n");
					keepPicking = 0;
				}
				// while keepPicking is not 0, picking apple will continue.
			} while (keepPicking != 0);  
		}

		//Picking pears
		if (pears > 0) {
			do {
				printf("Pick some PEARS... how many did you pick? : ");
				scanf(" %d", &pickedNumber);
				if (pickedNumber <= 0) {
					printf("ERROR: You must pick at least 1!\n");
					keepPicking = 1;
				} else if (pears - pickedNumber < 0) {
					printf("You picked too many... only %d", pears);
					printf(" more PEAR(S) are needed.\n");
					keepPicking = 1;
				} else if (pears - pickedNumber > 0) {
					printf("Looks like we still need some PEARS...\n");
					pears -= pickedNumber;
					keepPicking = 1;
				} else if (pears == pickedNumber) {
					printf("Great, that's the pears done!\n\n");
					keepPicking = 0;
				}
			} while (keepPicking != 0);
		}

		//Picking cabbages
		if (cabbages > 0) {
			do {
				printf("Pick some CABBAGES... how many did you pick? : ");
				scanf(" %d", &pickedNumber);
				if (pickedNumber <= 0) {
					printf("ERROR: You must pick at least 1!\n");
					keepPicking = 1;
				} else if (cabbages - pickedNumber < 0) {
					printf("You picked too many... only %d", cabbages);
					printf(" more CABBAGE(S) are needed.\n");
					keepPicking = 1;
				} else if (cabbages - pickedNumber > 0) {
					printf("Looks like we still need some CABBAGES...\n");
					cabbages -= pickedNumber;
					keepPicking = 1;
				} else if (cabbages == pickedNumber) {
					printf("Great, that's the cabbages done!\n\n");
					keepPicking = 0;
				}
			} while (keepPicking != 0);
		}

		//While the outerCount is not 0, the Grocery Shopping will keep going
		printf("All the items are picked!\n\n");
		printf("Do another shopping? (0=NO): ");
		scanf(" %d", &outerCount);

		printf("\nGrocery Shopping\n");
		printf("================\n");
		printf("How many APPLES do you need? : ");
		scanf(" %d", &apples);
		printf("\n");
		printf("How many ORANGES do you need? : ");
		scanf(" %d", &oranges);
		printf("\n");
		printf("How many PEARS do you need? : ");
		scanf(" %d", &pears);
		printf("\n");
		printf("How many TOMATOES do you need? : ");
		scanf(" %d", &tomatoes);
		printf("\n");
		printf("How many CABBAGES do you need? : ");
		scanf(" %d", &cabbages);
		printf("\n");

		printf("--------------------------\n");
		printf("Time to pick the products!\n");
		printf("--------------------------\n\n");

		//Picking oranges
		if (oranges > 0) {
			do {
				printf("Pick some ORANGES... how many did you pick? : ");
				scanf(" %d", &pickedNumber);
				if (pickedNumber <= 0) {
					printf("ERROR: You must pick at least 1!\n");
					keepPicking = 1;
				} else if (oranges - pickedNumber < 0) {
					printf("You picked too many... only %d", oranges);
					printf(" more ORANGE(S) are needed.\n");
					keepPicking = 1;
				} else if (oranges - pickedNumber > 0) {
					printf("Looks like we still need some ORANGES...\n");
					oranges -= pickedNumber; 
					keepPicking = 1;
				} else if (oranges == pickedNumber) {
					printf("Great, that's the oranges done!\n\n");
					keepPicking = 0;
				}
			} while (keepPicking != 0);
		}
		//Picking tomatoes
		if (tomatoes > 0) {
			do {
				printf("Pick some TOMATOES... how many did you pick? : ");
				scanf(" %d", &pickedNumber);
				if (pickedNumber <= 0) {
					printf("ERROR: You must pick at least 1!\n");
					keepPicking = 1;
				} else if (tomatoes - pickedNumber < 0) {
					printf("You picked too many... only %d", tomatoes);
					printf(" more TOMATO(ES) are needed.\n");
					keepPicking = 1;
				} else if (tomatoes - pickedNumber > 0) {
					printf("Looks like we still need some TOMATOES...\n");
					tomatoes -= pickedNumber;
					keepPicking = 1;
				} else if (tomatoes == pickedNumber) {
					printf("Great, that's the tomatoes done!\n\n");
					keepPicking = 0;
				}
			} while (keepPicking != 0);
		}
		printf("All the items are picked!\n\n");
		printf("Do another shopping? (0=NO): ");
		scanf(" %d", &outerCount);
	} while (outerCount != 0); //While outerCount is not 0, the loop will continue

	printf("\n");
	printf("Your tasks are done for today - enjoy your free time!\n");
	
	return 0;
}



