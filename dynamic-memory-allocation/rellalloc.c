#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr;
    ptr= (int*)calloc(4,sizeof(int));
    // now suppose in runtime i want to change the size of the array so we use realloc 
    ptr = (int*) realloc(ptr,2);
    printf("%d",*(ptr +0));
    scanf("%d",(ptr +1));
    printf("%d",*(ptr +1));
}