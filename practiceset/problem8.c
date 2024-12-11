#include <stdio.h>

int main()
{
    int year, leap;
    printf("Enter the year you want to find is leap or not");
    scanf("%d", &year);
    
    if ((year %4==0 && year%100!=0 )|| year%400==0 )
        printf("the year you have enter is leap year");
    else
        printf("the year you have enter is not a leap year");

    return 0;
}
