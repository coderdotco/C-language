#include<stdio.h>
void main(){
    int i=5;
    printf("the value of i is %d \n ",i);//5
    i=i+5;
    printf("the value of i is %d \n",i); //10
    printf("the value of i is %d \n ",i++);//10
    printf("the value of i is %d \n",i); //11
    printf("the value of i is %d \n",++i); //12
    printf("the value of i is %d \n",i--); //12
    printf("the value of i is %d \n",i); //11
    printf("the value of i is %d \n",--i); //10
    printf("the value of i is %d \n",--i); //9    
    printf("the value of i is %d \n",i--); //9    
    printf("the value of i is %d \n",i); //8    


}