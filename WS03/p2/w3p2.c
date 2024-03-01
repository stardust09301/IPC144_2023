/******************************************************************************
 <assessment name example: Workshop - #3 (Part-2)>
Full Name : Jenna Moon
Student ID#: 134957224
Email : jmoon32@myseneca.ca
Section : NCC
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    
    //declare variables
    char coffeeType1, coffeeType2, coffeeType3;
    int bagWeight1, bagWeight2, bagWeight3;
    char creamInput1, creamInput2, creamInput3;

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");

    //To enter coffee sales today
    printf("Enter the coffee product information being sold today...\n\n");
    
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType1);
    printf("Bag weight (g): ");
    scanf(" %d", &bagWeight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamInput1);

    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType2);
    printf("Bag weight (g): ");
    scanf(" %d", &bagWeight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamInput2);

    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &coffeeType3);
    printf("Bag weight (g): ");
    scanf(" %d", &bagWeight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &creamInput3);

    printf("\n");
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");

    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
        coffeeType1 == 'l' || coffeeType1 == 'L',
        coffeeType1 == 'm' || coffeeType1 == 'M',
        coffeeType1 == 'r' || coffeeType1 == 'R',
        bagWeight1,
        bagWeight1 / GRAMS_IN_LBS,
        creamInput1 == 'Y' || creamInput1 == 'y');
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
        coffeeType2 == 'l' || coffeeType2 == 'L',
        coffeeType2 == 'm' || coffeeType2 == 'M',
        coffeeType2 == 'r' || coffeeType2 == 'R',
        bagWeight2,
        bagWeight2 / GRAMS_IN_LBS,
        creamInput2 == 'Y' || creamInput2 == 'y');
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",
        coffeeType3 == 'l' || coffeeType3 == 'L',
        coffeeType3 == 'm' || coffeeType3 == 'M',
        coffeeType3 == 'r' || coffeeType3 == 'R',
        bagWeight3,
        bagWeight3 / GRAMS_IN_LBS,
        creamInput3 == 'Y' || creamInput3 == 'y');

    //To enter your taste of coffee
    char strength, cream;
    int dailyServings;

    printf("\n");
    printf("Enter how you like your coffee...\n\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &dailyServings);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");

    //table2 from customer's preference
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n",
        strength == 'l' || strength == 'L', dailyServings >= 1 && dailyServings <= 4, cream == 'y' || cream == 'Y');
    printf(" 2|       %d         |      %d      |   %d   |\n",
        strength == 'r' || strength == 'R', dailyServings >= 5 && dailyServings <= 9, cream == 'n' || cream == 'N');
    printf(" 3|       %d         |      %d      |   %d   |\n",
        strength == 'm' || strength == 'M', dailyServings >= 10, cream == 'n' || cream == 'N');

    printf("\nEnter how you like your coffee...\n\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &strength);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &dailyServings);
    printf("\nThe below table shows how your preferences align to the available products:\n\n");

    //table3 from customer's preference
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n"
        , strength == 'l' || strength == 'L', dailyServings >= 1 && dailyServings <= 4, cream == 'y' || cream == 'Y');
    printf(" 2|       %d         |      %d      |   %d   |\n",
        strength == 'r' || strength == 'R', dailyServings >= 5 && dailyServings <= 9, cream == 'n' || cream == 'N');
    printf(" 3|       %d         |      %d      |   %d   |\n",
        strength == 'm' || strength == 'M', dailyServings >= 10, cream == 'n' || cream == 'N');
    printf("\nHope you found a product that suits your likes!\n");

    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/