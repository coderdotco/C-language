#include<stdio.h>
int star(int);
int star(int a){
    int nst=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst+=2;
        printf("\n");
    }
    return 0;
}
int main(){
    int a;
    printf("enter the no of lines :");
    scanf("%d",&a);
    star(a);
    
}