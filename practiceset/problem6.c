#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter the marks of 1st sub");
    scanf("%d", &a);
    printf("enter the marks of 2nd sub");
    scanf("%d", &b);
    printf("enter the marks of 3rd sub");
    scanf("%d", &c);

    
    if (a < 33 || b < 33 || c < 33)
        printf("you are failed due to less marks in individual subjects");
    else if ((a + b + c) / 3 < 40)
        printf("you are failed due to less percentage");
    else
        printf("you are passed");

    return 0;
}