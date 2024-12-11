#include<stdio.h>
int main(){
    // READING WITH fgets() 
    FILE* ptr =fopen("t1.txt","r");
    char str[100]; 
    // fgets used to read whole line or whole file 
    while(fgets(str,100,ptr)!=NULL) {
        printf("%s",str);
    }

    fclose(ptr); // for closing a file- syntax - fclose(<file_pointer_variable>) ;

}