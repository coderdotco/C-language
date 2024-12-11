#include<stdio.h>
int main(){

    // writing a character  using fputc()
    FILE* ptr = fopen("t1.txt","w");
    char ch ='A';

    fputc(ch,ptr);
    fclose(ptr);

}