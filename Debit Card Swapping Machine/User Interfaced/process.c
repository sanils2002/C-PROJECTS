#include "details.h"
#include <stdio.h>

void print_successful()
{
    printf("\n\t\t\t\t********Transaction is successful...********");
}

/**
 **/

void print_declined()
{
    printf("\n\t\t\t\t********Transaction declined...********");
}

/**
 **/

void invalid_selection()
{
    printf("\t\t\t\t********Invalid Selection!!!********");
}

/**
 **/

void receipt_printed()
{
    printf("\n\n\t\t\t\t********Receipt Succesfully Printed!!!********");
}

/**
 **/

void thank_you()
{
    printf("\n\n\t\t\t\t********Thank You for Using the Service!!!********");
}

/**
 **/

void prt_cmd(char ch)
{

    printf("\n\nDo you want receipt of transaction:");
    scanf(" %[^\n]", &ch);
      
    system("CLS");
    
    if(ch=='y' || ch=='Y')
    {
        receipt_printed();
        thank_you();
	}
	   
	else if(ch=='n' || ch=='N')
	{
       	thank_you();
	}

}

/**
 **/

void transaction(char pin1[], char pin2[], float amt, float savbal, float currbal, unsigned short a, char ch)
{

    switch(a)
    {

        case 1: //Savings//
            
        system("CLS");

		if(strcmp("1973", pin1)==0 && amt<=savbal-1000.00)
        {
            print_successful();
        }

        else
        {
            print_declined();
        }

        break;
          
          
        case 2: //Current//
    
        system("CLS");

		if(strcmp("0205", pin2)==0 && amt<=currbal-10000.00)
        {
            print_successful();
        }
            
        else
        {
            print_declined();
        }

        break;
          
          
        default:

        invalid_selection();
        break;

    }
      
	prt_cmd(ch);

}