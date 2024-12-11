#include<stdio.h>
int swap(int* ,int*);
int main(){
    int a=3;
    int b=5;
    swap(&a,&b);
    printf("the value of a is %d\n",a);
    printf("the value of b is %d",b);
}
int swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return 0;
}