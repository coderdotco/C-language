#include<stdio.h>
int main(){
    // - fgets,fgetc,fscanf - read
    // - fputs,fputc,fprintf - write

    FILE* ptr;
    ptr = fopen("t1.txt","w");
    FILE* p;
    p=fopen("t2.txt","w");

    char str[]= "ssvfsigekjwr";
    // fputs(<string_name>,<File_variable>);
    //fputs(str,ptr);

    char a ='a';
    //fputc(a,ptr);
    // textfile, binaryfile

    fprintf(ptr,"%s",str);
    // fprintf(<file_variable_name>,"fromat specifier",<what to enter>);
    
    








}