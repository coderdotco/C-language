#include<stdio.h>
#include<stdlib.h> // to use dynamic memory functions we use stdlib header file
/* array has a fixed size . to solve this we use dynamic memoery allocation (dma) thing so that to use the array
directly as a pointer and dma is also used when we have to work with memory or use low level compatibility
 */

// there are four dma fucntions - malloc(),calloc(),realloc(),free()
// these functions by default returns null value thats why we type cast it 
int main(){
    int n=4;
    int* ptr ;
    ptr =(int*)malloc(n* sizeof(int)); // this way we can create a array ptr of n*sizeof(int) sizee 
    *(ptr + 0) = 1;
    printf("%d",*(ptr +0));
    scanf("%d",(ptr +1));
    printf("%d",*(ptr +1));

}