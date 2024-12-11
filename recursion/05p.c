#include<stdio.h>
int decrease(int x,int n){
    if(x>n) return 1;
    decrease(x+1,n);
    printf("%d\n",x);
    return 1;


}
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    decrease(1,n);

}