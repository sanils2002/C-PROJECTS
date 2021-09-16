#include "details.h"
#include <stdio.h>

void positive_response()
{

    system("CLS");

	printf("\nThe requirements satisfy the permission for entry!!!");
	printf("\nWelcome, You are permitted to enter!!!");

}

void negative_response()
{

    system("CLS");

	printf("\nThe requirements do not satisfy the permission for entry!!!");
	printf("\nKindly wait for 5 minutes and try again!!!");
	printf("\nElse you are not permitted to enter!!!");

}

void checkpt(float temp, float oxy)
{

    if(temp<=98.6 && oxy>=0.95) 
	{
		positive_response();
	}

	else if(temp>98.6 && oxy<0.95)
	{
		negative_response();
	}

	else if(temp<=98.6 && oxy<0.95)
	{
		negative_response();	
	}

	else if (temp>98.6 && oxy>=0.95)
	{
		negative_response();
	}

}
