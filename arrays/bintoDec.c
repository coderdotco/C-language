#include<stdio.h>
#include<math.h>
void bintodec(int n){
    
    int b;
    int sum=0,p=0;
    while(n>0){
        b=n%10;
        sum=sum+b*pow(2,p);
        p++;
        n=n/10;
    }
    
    printf("%d",sum);
}
int main(){
    int n=10111;
    bintodec(n);
}