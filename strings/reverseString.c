#include<stdio.h>
#include<string.h>
int main(){
    char str[15];
    printf("enter the sentence/string :\n");
    scanf("%[^\n]s",str);
    int i=0;
    int count=0;
    //size of string
    while (str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\nthe  size of string is %d\n",count-1);
    //reverse of string
    for(int j=0,k=count-1;j<=k;j++,k--){
        int temp =str[j];
        str[j]=str[k];
        str[k]=temp;
    }
    printf("the reverse of the string is %s ",str);
    
    

}