#include <stdio.h>

int main()
{
    float income, tax=0;
    printf("write your family income in lakhs as L:");
    scanf("%f", &income);
    if (income > 1000000.00)
    {
        tax=0.05*(500000-250000)+0.2*(1000000-500000)+0.3*(income-1000000);
    } 

    else if  ( income < 500000 && income > 250000 )
        {
            tax = 0.05*(income-250000);
            
        }
    else if  (income < 1000000 && income >= 500000)
        {
            tax =0.05*(500000-250000)+0.2*(income-500000);
           
        }
    else
        tax=0;

    printf("the income tax is %0.2f",tax);    

    return 0;
}