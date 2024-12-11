#include<stdio.h>
int main(){
int n;
printf("enter the no of lines :");
scanf("%d",&n);
int nsp=n-1;
int q;

for(int i=1;i<=n;i++){
    int a=1;
    int d;
    for(int j=1;j<=nsp;j++){
        printf(" ");
    }
    nsp--;
    for(int k=1;k<=i;k++){
        d=a+64;
        printf("%c",d);
        a++;
    }
    d--;
    for(q=1;q<=i-1;q++){
        printf("%c",d);
        d--;
        
    }
    
    printf("\n");
}
}