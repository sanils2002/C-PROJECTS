
#include <stdio.h>
#include <conio.h>

int main()
{
    system("CLS");
    
    int a;
    float amt, savbal=5000.00, currbal=500000.00;
    char pin1[4]="1973", pin2[4]="0205";
    char ch;
    
    printf("\t\t\t\t********Welcome to Debit Card Swapping Machine********");
	  printf("\n\nEnter the amount to be debited:");
    scanf("%f", &amt);
    system("CLS");
    
    printf("\nEnter account choice:\n1. Savings \n2. Current \n\n");
    scanf(" %d", &a);
    system("CLS");
    
    if (a==1)
    {
     printf("\nEnter the pin:");
     scanf("%s", &pin1);
    }
    else if (a==2)
    {
     printf("\nEnter the pin:");
     scanf("%s", &pin2);
    }
    
    
        switch(a)
        {
          case 1: //Savings//
            
            system("CLS");
			if(strcmp(pin1,"1973")==0 && amt<=savbal-1000.00)
             {
              printf("\n\t\t\t\t********Transaction is successful...********");
             }
            else
             {
              printf("\n\t\t\t\t********Transaction declined...********");
             }
          break;
          
          
          case 2: //Current//
    
            system("CLS");
			if(strcmp(pin2,"0205")==0 && amt<=currbal-10000.00)
             {
              printf("\n\t\t\t\t********Transaction is successful...********");
             }
            else
             {
              printf("\n\t\t\t\t********Transaction declined...********");
             }
          break;
          
          
          default:

          	printf("\t\t\t\t********Invalid Selection!!!********");
          	break;
        }
      
      
      printf("\n\nDo you want receipt of transaction:");
      scanf(" %[^\n]", &ch);
      
      system("CLS");
	    if(ch=='y' || ch=='Y')
       {
       	
       	printf("\n\n\t\t\t\t********Receipt Succesfully Printed!!!********");
       	printf("\n\n\t\t\t\t********Thank You for Using the Service!!!********");
	   }
	   
	    else if(ch=='n' || ch=='N')
	   {
       	printf("\n\n\t\t\t\t********Thank You for Using the Service!!!********");
	   }
     
    getch();
	return 0;
}
