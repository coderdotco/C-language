#include <stdio.h>
int main()
{
    int a;
    printf("enter the value");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you enter 1\n");
        break;
    case 2:
        printf("you enter 2\n");
        break;
        
    case 3:
        printf("you enter 3\n");
        break;
    case 4:
        printf("you enter 4");
        break;
    }
    return 0;
}