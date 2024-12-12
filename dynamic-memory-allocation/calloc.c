#include<stdio.h>
#include<stdlib.h>
int main(){
    // calloc is as same as malloc just the diff is syntax 
    // and in malloc if not assigned by default there are garbage values while in calloc by default is  0
    int* ptr;
    ptr =(int*) calloc(10,sizeof(int));
    *(ptr + 0) = 1;
    printf("%d",*(ptr +0));
    scanf("%d",(ptr +1));
    printf("%d",*(ptr +1));
}