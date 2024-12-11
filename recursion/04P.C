#include<stdio.h>
int decrease(int x){
    if(x<=0 ) return 1 ;
    printf("%d\n",x);
    decrease(x-1);
    printf("%d\n",x);
    return 1;
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int dec=decrease(n);
    
    return 0;
}