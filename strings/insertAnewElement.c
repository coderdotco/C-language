#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("enter the index :");
    scanf("%d",&n);
    char a='j';
    char str[20]="helloworld";
    int x=strlen(str);
    printf("\n%d\n",x);
    for(int i=x-1;i>=n;i--){
        str[i+1]=str[i];

    }
    str[n]='j';
    printf("%s",str);
    
}