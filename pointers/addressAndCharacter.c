#include<stdio.h>
int main(){
    char str[]="Hello world";
    char* ptr;
    ptr=str;
    while(*ptr !='\0'){
        
        printf("Charcter : %c , Address : %d \n",*ptr,ptr);
        ptr++;
    }
    return 0;
}