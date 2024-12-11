#include<stdio.h>
int checkprime(int);
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int c=checkprime(n);
    if(c==1) printf("Prime");
    else printf("not prime");
}
int checkprime(int a){
    int prime=1;
    if(a<2) {
        return 1;
    }

    else{
        for(int i=2;i<=a/2;i++){
            if(a%i==0) prime=0;

        }
        if(prime==1) return 1;
        else if (prime ==0) return 0;
    }
}