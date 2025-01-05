#include<stdio.h>
int main(){
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the values of matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int max[n];
    for(int i=0;i<n;i++){
        max[i]=0;
        for(int j=0;j<n;j++){
            if(max[i]<arr[i][j]) max[i] = arr[i][j];
        }

        printf("%d ",max[i]);
    }
}