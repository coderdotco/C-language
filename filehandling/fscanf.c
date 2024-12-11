#include<stdio.h>
int main(){
    // READING WITH fscanf() 
    FILE* ptr =fopen("t1.txt","r");
    char ch[100];
    while(fscanf(ptr,"%s",ch)!=EOF){
        printf("%s ",ch);
    }
    fclose(ptr);
}