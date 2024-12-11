#include<stdio.h>
int main(){
    // writng a file using fprintf()

    FILE* ptr=fopen("t1.txt","w");
    char str[]= "Hello bhai log\nae bhidu ";
    fprintf(ptr,"%s",str);
    
    
    
}