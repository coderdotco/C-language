#include<stdio.h>
void dectobin(int n){
    int a=n;
    int b[32];
    int i=0;
    while(n>0){
        b[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",b[j]);
    }
}
int main(){
    int n=23;
    dectobin(n);
}