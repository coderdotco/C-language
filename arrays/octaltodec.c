#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0;
    printf("Enter the number in octal :");
    scanf("%d",&n);

    int a=n;
    while(a>0){
        a=a/10;
        count++;

    }

    int sum=0;
    for(int i=0;i<count;i++){
        int rem=n%10;
        sum =sum + rem*pow(8,i);
        n=n/10;
    }
    printf("\n%d",sum);
}