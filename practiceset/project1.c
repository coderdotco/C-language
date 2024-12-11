#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a;
    // Initialize the random number generator with the current time as seed
    srand(time(0)); 

    // Generate a random number
    
    int count=0;
    int random_number = rand() % 100 + 1 ;
    while (a!=random_number)
    {

    printf("\nenter the number :");
    scanf("%d",&a);
    count++;
    if(a>random_number)
    printf("\nlower number please");
    else 
    printf("\nhigher number please");


    }
    printf("\nyou guessed the number in %d guessed",count);

    
    


    return 0;
}
