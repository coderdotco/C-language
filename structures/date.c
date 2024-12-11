#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// way of comparision of structures 


int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } dateis;
    dateis a,b;
    a.day = 19;
    a.month = 12;
    a.year =2024;

    b.day = 1;
    b.month = 11;
    b.year =2024;

    bool flag=true;
    if(a.day !=b.day) flag =false;
    if(a.month !=b.month) flag=false;
    if(a.year !=b.year) flag=false;

    if(flag==true) printf("dates are same");
    else printf("dates are different");


}