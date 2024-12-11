#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)//signifys no of lines
    {
        for (int j = 1; j <= 5; j++)//signifies that what happens in one line
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}