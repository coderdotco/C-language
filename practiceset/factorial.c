#include<stdio.h>
int main(){
    int num;
    int fact=1;
    printf("Enter the number of which you want factorial : ");
    scanf("%d",&num);
    int i=1;
    while(i<=num){
        fact=fact*i;
        i++;
    }
    printf("\nThe factorial of %d is %d ",num,fact);
}
