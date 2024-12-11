#include<stdio.h>
#include<string.h>
int main(){
    struct book

    {
        char name[50];
        int noofpages;
        float price;
    } a,b,c; //another way to declare instead of struct book a 
    strcpy(a.name,"rich dad poor dad");
    a.price=334.3;
    a.noofpages=223;
    printf("\na book name =%s",a.name);

    
}