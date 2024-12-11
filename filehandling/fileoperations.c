#include<stdio.h>
int main(){
    FILE* ptr=fopen("t1.txt","r");
    char str[100];
    // fseek() is used to  take the pointer to any position of the file
    //fseek(ptr,5,SEEK_SET);

    // ftell() is used to tell where the pointer is by returning size 
    //long size = ftell(ptr);

    // feof() used to check if file is at the end. return non zero is file is at the end and zero for vice versa

    // ferror() used to check  if error has occureed. return non zero for error and 0 for no error

    // rewind() used to reset the pointer to start of the file
    
    

}