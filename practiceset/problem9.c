#include<stdio.h>

int main(){
    char ch='c';
    printf("the character is %c\n",ch);
    printf("the ascii value of character is %d",ch);
    if( ch>=97 && ch<=122 )
    printf("the character is lowercase\n");
    else 
    printf("the character is not lowercase\n");

}