#include<stdio.h>
int main(){
    // READING WITH fgetc() 
    FILE* ptr =fopen("t1.txt","r");
    char ch;
    // syntax - <charcterVariable> = fgetc(<file_pointer_variable>);
    while(1){
        ch=fgetc(ptr);
        if(ch==EOF){
            break;
        }
        else{
            printf("%c",ch);
        }
    }
    fclose(ptr);
}