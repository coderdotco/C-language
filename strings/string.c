#include<stdio.h>
int main(){
    int i=0;
    char ch[]="hello world! kya haal chal "; // ismai last mai \0 nai denge toh bhi chalega because computer atomatic \0 dalega 
    while(ch[i]!='\0'){
        printf("%c",ch[i]);
        i++;
    }
}