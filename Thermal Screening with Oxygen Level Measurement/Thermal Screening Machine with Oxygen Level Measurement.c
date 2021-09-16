
#include<stdio.h>

int main()
{
	system("CLS");

	float temp, oxy;
	printf("Please wait while we scan your Body Temperature:");
	scanf("%f", &temp);
	printf("Please wait while we measure your Oxygen Level:");
	scanf("%f", &oxy);
	
	if (temp>98.6 && oxy<0.95)
	{
		system("CLS");

	 	printf("\nThe requirements do not satisfy the permission for entry!!!");
	 	printf("\nKindly wait for 5 minutes and try again!!!");
	 	printf("\nElse you are not permitted to enter!!!");
	}

	else if(temp<=98.6 && oxy>=0.95)
	{
		system("CLS");

	    printf("\nThe requirements satisfy the permission for entry!!!");
	 	printf("\nWelcome, You are permitted to enter!!!");	
	}

	else if(temp<=98.6 && oxy<0.95)
	{
		system("CLS");

	    printf("\nThe requirements do not satisfy the permission for entry!!!");
	 	printf("\nKindly wait for 5 minutes and try again!!!");
	 	printf("\nElse you are not permitted to enter!!!");	
	}

	else if (temp>98.6 && oxy>=0.95)
	{
		system("CLS");

	 	printf("\nThe requirements do not satisfy the permission for entry!!!");
	 	printf("\nKindly wait for 5 minutes and try again!!!");
	 	printf("\nElse you are not permitted to enter!!!");
	}
	 
	return 0;
}
