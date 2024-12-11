#include<stdio.h>
int factorial(int );
int combination(int ,int);
int main(){
    int n;
    int r;
    printf("enter n  :");
    scanf("%d",&n);
    int nsp=n;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        nsp--;
        for(int j=0;j<=i;j++){
           
            int ncr=combination(i,j);
            printf("%d",ncr);
        }
        printf("\n");
    }
}
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
    return nfact/(rfact*nrfact);
 

}