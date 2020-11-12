#include <stdio.h>
#include <stdlib.h>
int main()
{
float usdMoney,currentUSD;
printf("Hello in USD-EGP Converter: \n");
printf("----------------------------------------\n");
printf("Please Enter the Money in USD: ");              scanf("%f",&usdMoney);
printf("Please Enter the Value of USD Today: ");        scanf("%f",&currentUSD);
printf("Your Entry in USD is: %f USD\n", usdMoney);
printf("Your Entry in EGP is: %f EGP\n\n", usdMoney*currentUSD);
return 0;
}


