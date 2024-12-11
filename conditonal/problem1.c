#include<stdio.h>
int main(){
    int a;
    printf("enter the marks of student to get his/her grades");
    scanf("%d",&a);
    if (a>90 && a<100 ){
        printf("the studnet ahs A grade");
    }
    else if(a>80 && a<=90){
        printf("the student has B grade");

    }
    else if(a>70 && a<=80){
        printf("the studnet has C grade");
    }
    else if(a>60 && a<=70){
        printf("the student has  D grade");

    }
    else if (a>50 && a<=60){
        printf("the studnet has E grade");
    }
    else if(a<=50){
        printf("the studnet has F grade");
    }



    return 0;
}