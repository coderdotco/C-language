#include<stdio.h>
int main(){
    FILE* ptr=fopen("t1.txt","r");
    char str[100];
    
    while(fgets(str,100,ptr)!=NULL) printf("%s",str);
    
    
    

    while(fgets(str,100,ptr)!=NULL) printf("%s",str);
}