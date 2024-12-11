#include<stdio.h>
int combination(int ,int);
int main(){
    int n,r;
    printf("enter the n value:");
    scanf("%d",&n);
    printf("\nenter the value of r :");
    scanf("%d",&r);
    int c=combination(n,r);
    printf("the value of ncr of n= %d and r= %d  is %d",n,r,c);
}

int combination(int n,int r){
    int nfact=1;
    for(int i=1;i<=n;i++){
        nfact=nfact*i;
    }
    int rfact=1;
    for(int i=1;i<=r;i++){
        rfact=rfact*i;
    }
    int nrfact=1;
    for(int i=1;i<=(n-r);i++){
        nrfact=nrfact*i;
    }
    return (nfact)/(rfact*nrfact);

}