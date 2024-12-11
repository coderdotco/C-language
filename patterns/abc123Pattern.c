#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of rows :");
    scanf("%d",&n);
    int a=1;
    char b='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            if(i%2==0){
                printf(" %c",b);
                b++;
                
            }
            else {
                printf(" %d",a);
                a++;
            }
        }
        printf("\n");
    }
}