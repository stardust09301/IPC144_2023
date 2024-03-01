/******************************************************************************
 <assessment name example: Workshop - #2 (Part-2)>
Full Name : Jenna Moon
Student ID#: 134957224
Email : jmoon32@myseneca.ca
Section : NCC
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double priceSmall, priceMedium, priceLarge; //Shirt price list
	int numberPatty, numberTommy, numberSally;// number of shirts

	const double TAX = 0.13;
	const char patSize = 'S', salSize = 'M', tomSize = 'L';

	int subtotalPat, subtotalSal, subtotalTom, patTaxes, salTaxes, tomTaxes,
		patTotal, salTotal, tomTotal; //subtotal, tax and total 


	printf("Set Shirt Prices\n");
	printf("================\n");

	//Enter the prices for each size
	printf("Enter the price for a SMALL shirt: $"); 
	scanf("%lf", &priceSmall);
	printf("Enter the price for a MEDIUM shirt: $");
	scanf("%lf", &priceMedium);
	printf("Enter the price for a LARGE shirt: $");
	scanf("%lf", &priceLarge);
	printf("\n");

	//Display shirt prices for each size
	printf("Shirt Store Price List\n");
	printf("======================\n");
	printf("SMALL  : $%.2lf\n", priceSmall); 
	printf("MEDIUM : $%.2lf\n", priceMedium);
	printf("LARGE  : $%.2lf\n", priceLarge);
	printf("\n");
	
	//Number of shirts is buying for each customers
	printf("Patty's shirt size is 'S'\n"); 
	printf("Number of shirts Patty is buying: ");
	scanf("%d", &numberPatty);
	printf("\n");
	printf("Tommy's shirt size is 'L'\n");
	printf("Number of shirts Tommy is buying: ");
	scanf("%d", &numberTommy);
	printf("\n");
	printf("Sally's shirt size is 'M'\n");
	printf("Number of shirts Sally is buying: ");
	scanf("%d", &numberSally);
	printf("\n");
	
	//subtotal, taxes and total calculations for each customers
	subtotalPat = numberPatty * priceSmall * 100 + 0.5;
	patTaxes = subtotalPat * TAX + 0.5;
	patTotal = subtotalPat + patTaxes;
	subtotalSal = numberSally * priceMedium * 100 + 0.5; 
	salTaxes = subtotalSal * TAX + 0.5;
	salTotal = subtotalSal + salTaxes;
	subtotalTom = numberTommy * priceLarge * 100 + 0.5;
	tomTaxes = subtotalTom * TAX + 0.5;
	tomTotal = subtotalTom + tomTaxes;

	//display customers, sizes, price, qty, sub-total, tax and total in the table
	printf("Customer Size Price Qty Sub-Total       Tax     Total\n"); 
	printf("-------- ---- ----- --- --------- --------- ---------\n");
	printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
		patSize, priceSmall, numberPatty, (double)subtotalPat/100, (double)patTaxes/100,(double)patTotal/100);
	printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
		salSize, priceMedium, numberSally, (double)subtotalSal / 100, (double) salTaxes/100, (double)salTotal/100);
	printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",
		tomSize, priceLarge, numberTommy, (double)subtotalTom/100,(double)tomTaxes/100,(double)tomTotal/100);
	printf("-------- ---- ----- --- --------- --------- ---------\n");
	//Calculation of sum of subtotal, Taxe, and Total
	printf("%33.4lf %9.4lf %9.4lf\n\n",
		(double)subtotalPat / 100 + (double)subtotalSal / 100 + (double)subtotalTom / 100,
		(double)patTaxes / 100 + (double)salTaxes / 100 + (double)tomTaxes / 100,
		(double)patTotal / 100 + (double)salTotal / 100 + (double)tomTotal / 100);
	
	//To calculate number of coins and remainders for the amount
	double amount = (double)subtotalPat / 100 + (double)subtotalSal / 100 + (double)subtotalTom / 100;
	int numToonies, numLoonies,numQaurters,numDimes, numNickels, numPennies;
	double remainderToonies, remainderLoonies,remainderQuarters, remainderDimes, remainderNickels,remainderPennies;
	numToonies = amount / 200 * 100;
	remainderToonies = amount - numToonies * 2;
	numLoonies = remainderToonies / 100 * 100;
	remainderLoonies = remainderToonies - numLoonies;
	numQaurters = remainderLoonies / 25 * 100;
	remainderQuarters = remainderLoonies - (0.25 * numQaurters);
	numDimes = remainderQuarters / 10 * 100;
	remainderDimes = remainderQuarters - (0.1 * numDimes);
	numNickels = remainderDimes / 5 * 100;
	remainderNickels = remainderDimes - (0.05 * numNickels);
	numPennies = remainderNickels / 1 * 100+ 1;
	remainderPennies = numPennies- numPennies;

	printf("Daily retail sales represented by coins\n");
	printf("=======================================\n\n");
	//table for subtotals by coins
	printf("Sales EXCLUDING tax\n");
	printf("Coin     Qty   Balance\n");
	printf("-------- --- ---------\n");
	printf("              %8.4lf\n", amount);
	printf("Toonies  %d  %8.4lf\n", numToonies,remainderToonies);
	printf("Loonies    %d  %8.4lf\n", numLoonies,remainderLoonies);
	printf("Quarters   %d  %8.4lf\n", numQaurters, remainderQuarters);
	printf("Dimes      %d  %8.4lf\n", numDimes, remainderDimes);
	printf("Nickels    %d  %8.4lf\n", numNickels, remainderNickels);
	printf("Pennies    %d  %8.4lf\n\n", numPennies, remainderPennies);
	
	int totalNumber = numberPatty + numberSally + numberTommy;
	printf("Average cost/shirt: $%7.4lf\n\n", amount/totalNumber);

	double totalAmount = (double)patTotal / 100 + (double)salTotal / 100 + (double)tomTotal / 100;
	int numberToonies, numberLoonies, numberQaurters, numberDimes, numberNickels, numberPennies;
	double remainingToonies, remainingLoonies, remainingQuarters, remainingDimes, remainingNickels, remainingPennies;
	numberToonies = totalAmount / 200 * 100;
	remainingToonies = totalAmount - numberToonies * 2;
	numberLoonies = remainingToonies / 100 * 100;
	remainingLoonies = remainingToonies - numberLoonies;
	numberQaurters = remainingLoonies / 25 * 100;
	remainingQuarters = remainingLoonies - (0.25 * numberQaurters);
	numberDimes = remainingQuarters / 10 * 100;
	remainingDimes = remainingQuarters - (0.1 * numberDimes);
	numberNickels = remainingDimes / 5 * 100;
	remainingNickels = remainingDimes - (0.05 * numberNickels);
	numberPennies = remainingNickels / 1 * 100+ numberNickels;
	remainingPennies = numberPennies - numberPennies;
	
	//table for totals by coins
	printf("Sales INCLUDING tax\n");
	printf("Coin     Qty   Balance\n");
	printf("-------- --- ---------\n");
	printf("              %8.4lf\n", totalAmount);
	printf("Toonies  %d  %8.4lf\n", numberToonies, remainingToonies);
	printf("Loonies    %d  %8.4lf\n", numberLoonies, remainingLoonies);
	printf("Quarters   %d  %8.4lf\n", numberQaurters, remainingQuarters);
	printf("Dimes      %d  %8.4lf\n", numberDimes, remainingDimes);
	printf("Nickels    %d  %8.4lf\n", numberNickels, remainingNickels);
	printf("Pennies    %d  %8.4lf\n\n", numberPennies, remainingPennies);
	printf("Average cost/shirt: $%7.4lf\n\n", totalAmount / totalNumber);
	
	return 0;
}