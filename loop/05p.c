/*#include<stdio.h>
int main(){
    int a, i=0;
    scanf("%d",&a);

    do
    {
        printf("the value is %d \n",i);
        i=i+1;

    } while (i<=a);  //sample program for simple do while run
    return 0;
}
*/
#include<stdio.h>

int main() {
    int a, i = 0;

    // Take input from the user
    printf("Enter a number: ");
    scanf("%d", &a);

    // The do-while loop
    do {
        printf("the value is %d \n", i);
        i = i + 1;

    } while (i <= a);  // Loop continues until i becomes greater than a

    return 0;
}
