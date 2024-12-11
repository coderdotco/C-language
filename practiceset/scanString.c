#include<stdio.h>
#include<string.h>
#include<ctype.h>
void change(char str[]){
    for(int i=1;i<=strlen(str);i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
    }
    printf("string in upper case is %s",str);
}
int main(){
    char string[50];
    printf("enter the string :");
    scanf("%s",string);
    change(string);
}

