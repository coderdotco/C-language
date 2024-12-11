#include<stdio.h>
int main(){
    // now to open a file we use file pointer as a variable 
    // either directly initailizing along with declaration or initializing it afterwards
    // to open we use fopen()
    // syntax- <file_pointer_variable> = fopen("<file_name>","<mode_of_opening>");
    
    FILE* ptr;
    ptr = fopen("t1.txt","r");

}