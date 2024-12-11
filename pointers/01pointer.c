#include<stdio.h>
int main(){
    int x=5;
    int* a=&x; //int* hai voh address store karega
    int **y=&a; // int** hai voh int* ka adress store karega.(yani pointer ka adress store karega).
    printf("%p",a); //%p se address print hota hai. 
    printf("\n%p",&a); //&a se a ka address print hoga 
    printf("\n%d",*a); //*a se a ke adress mai jo bhi value ho vo print karega.
    *a=6; // value of x is chnaged from 5 to 6.
    printf("\n%d",x); //value of x is changed.

    printf("\n%p",y); 
    printf("\n%d",*a);//int x ki value print karega. 
    printf("\n%d",**y);// int x ki value print karega. 
    return 0;
}