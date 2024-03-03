/******************************************************************************
			  <assessment name example: Workshop - #4 (Part-1)>
Full Name  :  Jenna Moon
Student ID#:  134957224
Email      :  jmoon32@myseneca.ca
Section    :  NCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been shared 
with any other student or 3rd party content provider. This submitted piece of 
work is entirely of my own creation.
******************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//Declare loop_type, number, and i
	char loop_type;
	int number, i;

	printf("+----------------------+\n");
	printf("Loop application STARTED\n");
	printf("+----------------------+\n");

	do {
		printf("\n");
		printf("D = do/while | W = while | F = for | Q = quit\n");
		printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
		scanf(" %c%d", &loop_type, &number);
		switch (loop_type) {
		case 'D':
			if (number >= 3 && number <= 20) {
				printf("DO-WHILE: ");
				i = 0;
				do {
					printf("%c", loop_type);
					i++;
				} while (i < number);
			}
			else {
				printf("ERROR: The number of iterations must be between 3-20 inclusive!");
			}
			printf("\n");
			break;
		
		case 'W':
			if (number >= 3 && number <= 20) {
				printf("WHILE   : ");
				i = 0;
				while (i < number) {
					printf("%c", loop_type);
					i++;
				}
			}
			else {
				printf("ERROR: The number of iterations must be between 3-20 inclusive!");
			}
			printf("\n");
			break;
		
		case 'F':
			if (number >= 3 && number <= 20) {
				printf("FOR     : ");
				for (i = 0; i < number; i++) {
					printf("%c", loop_type);
				}
			}
			else {
				printf("ERROR: The number of iterations must be between 3-20 inclusive!");
			}
			printf("\n");
			break;
		
		case 'Q':
			if (number != 0) {
				printf("ERROR: To quit, the number of iterations should be 0!\n");
			}
			break;

		default:
			printf("ERROR: Invalid entered value(s)!\n");
		}
	} while (!(loop_type == 'Q' && number == 0)); //loop_type!='0' || number!=0
	
	printf("\n");
	printf("+--------------------+\n");
	printf("Loop application ENDED\n");
	printf("+--------------------+\n");
	printf("\n");

	return 0;
}