#include<stdio.h>
int main(){
    //filepointer =fopen("<file name>","< open mode>")
    FILE* fileptr;
    fileptr=fopen("trp1.txt","w");

    char str[100] ="hello world kya hall chal\nhello bhailog";
    fputs(str,fileptr); 
    //fputs(<string array > (str),<file pointer > (fileptr))

    fclose(fileptr);


    
}