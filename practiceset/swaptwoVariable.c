#include<stdio.h>
int swap(int* ,int*);

int main(){
    int a;
    int b;
    printf("Enter the number a :");
    scanf("%d",&a);
    printf("Enter the number b :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d\n%d",a,b);

}
int swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
