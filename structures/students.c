#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student{
    int rollnumber;
    char name[20];
    char department[30];
    char course[50];
    int yearofjoining ;

}studentdetail;

void fun(studentdetail a,studentdetail b){
    int x =strcmp(a.department,b.department);
   
    if(x==0) printf("same department");
    else printf("not same department");
}

int main(){
    studentdetail a,b;
    strcpy(a.name ,"rahul");
    a.rollnumber =2;
    strcpy(a.department ,"btech");
    strcpy(a.course ,"computer science");
    a.yearofjoining =2024;

    strcpy(b.name ,"pahul");
    b.rollnumber =5;
    strcpy(b.department ,"b.e.");
    strcpy(b.course ,"civil engineering");
    b.yearofjoining =2024;

    fun(a,b);


    

}