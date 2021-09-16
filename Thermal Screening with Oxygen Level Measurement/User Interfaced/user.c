#include "details.h"
#include <stdio.h>

int main()
{
	system("CLS");

	float temp, oxy;
	
	printf("Please wait while we scan your Body Temperature:");
	scanf("%f", &temp);
	printf("Please wait while we measure your Oxygen Level:");
	scanf("%f", &oxy);

    checkpt(temp, oxy);

    return 0;
}