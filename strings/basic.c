#include<stdio.h>
int main(){
    int i=0;
    char ch[]={'a','b','c','d','e','\0'};
    while(ch[i]!='\0'){
        printf("%c",ch[i]);
        i++;
    }

}