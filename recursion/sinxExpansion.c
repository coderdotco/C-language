#include<stdio.h>
long long factorial(int a){
    if(a<1) return 1;
    return a*factorial(a-1);
}
long int power(int a,int b){
    if(b<=0 ) return 1;
    return a*power(a,b-1);
}
int main(){
    int n;
    int x;
    long double sum=0.0;
    printf("Enter the value of maximum value of n (odd numbers ) :");
    scanf("%d",&n);
    printf("Enter the value of x :");
    scanf("%d",&x);
    for(int i=1;i<=n;i++){
        long double term =( (long double)power(x,2*i-1)*power(-1,i-1))/(double)factorial(2*i-1); 
        sum=sum + term; 
    }
    printf("%Lf",sum);
    
}