#include<stdio.h>
typedef int* pointer;
// typedef <old data type > <new data type >
int main(){
    int x=5,y=6;
    //int* a=&x,b=&y; //computer reads it as int* x and int y 
    //to solve this we can use typedef
    pointer a=&x,b=&y;
    printf("%p",a);
    printf("\n%p",b);
}