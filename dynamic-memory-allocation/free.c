#include<stdio.h>
#include<stdlib.h>
int main(){
    /* now suppose we have to free the memoory means if we have to execute the code and free up the
    space immedialty we use free function
     */
    int* ptr;
    ptr =(int*) calloc(10,sizeof(int));
    *(ptr + 0) = 1;
    printf("%d",*(ptr +0));
    scanf("%d",(ptr +1));
    free(ptr); // this statement will free up the memory means there is nothing in the memoery or any location
    /* means the code written above is of no use as it will only print garbage value as there 
    is no pointer no array nor any value in it 
    */
    printf("%d",*(ptr +1));
}