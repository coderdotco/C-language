#include<stdio.h>
int increase(int a,int x){
    
    if(a>x) return 1 ;
    printf("%d\n",a);
    increase(a+1,x);
    
    return 1;
}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int dec=increase(1,n);
    
    return 0;
}