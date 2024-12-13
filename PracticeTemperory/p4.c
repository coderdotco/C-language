#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    // - fgets,fgetc,fscanf - read
    // - fputs,fputc,fprintf - write

    FILE* ptr;
    ptr = fopen("t1.txt","r");
    
    char s[100] ;
// fgets(where to copy , size, which file);
    // while(fgets(s,100,ptr) != NULL){
    //     printf("%s",s);
    // }
    // fgetc(which_file);
    // char ch=fgetc(ptr);
    // printf("%c",ch);
    
    // while(fscanf(ptr,"%s",s)!= EOF){
    //     printf("%s ",s);
    // } 
    //fscanf(which file,format  specifier,wher to copy);

    
    








}