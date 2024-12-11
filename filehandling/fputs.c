#include<stdio.h>
int main(){
    // if we want to write we use w mode
    // writing using fputs()
    FILE* ptr = fopen("t1.txt","w");
    char str[] ="hello bhai log\n kaisa hai";
    fputs(str,ptr);

}