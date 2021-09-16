#include "details.h"
#include <stdio.h>

int main()
{
    system("CLS");
    
    unsigned short a;
    double amt, savbal=5000.00, currbal=500000.00;
    char pin1[4]="1973", pin2[4]="0205";
    char ch;

    printf("\t\t\t\t********Welcome to Debit Card Swapping Machine********");
	printf("\n\nEnter the amount to be debited:");
    scanf("%f", &amt);
    system("CLS");
    
    printf("\nEnter account choice:\n1. Savings \n2. Current \n\n");
    scanf(" %d", &a);
    system("CLS");
    
    if (1 == a)
    {
     printf("\nEnter the pin:");
     scanf("%s", &pin1);
    }

    else if (2 == a)
    {
     printf("\nEnter the pin:");
     scanf("%s", &pin2);
    }

    transaction(pin1, pin2, amt, savbal, currbal, a, ch);

    getch();
	return 0;

}    