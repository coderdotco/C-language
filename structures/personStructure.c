#include<stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[50];
        int age;
        float salary;

    }a,b;
    /*
    another way to write is 
    typedef struct person{
        char name[50];
        int age;
        float salary;

    }per*/
    
    //now we can directly use 'per' instead of 'struct person a'
    
    strcpy(a.name,"rehul");
    a.age=30;
    a.salary=22334.32;

    strcpy(b.name,"chimput");
    b.age=33;
    b.salary=34323.23;

    printf("the name of 1st person is %s",a.name);
    printf("\nthe age of second person is %d ",b.age);

    

}