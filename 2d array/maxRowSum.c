#include<stdio.h>
int main(){
    int arr[3][3];
    int max=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the no :");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        
        if(max<sum) max=sum;
        printf("sum of %d row is %d ",i,sum);
        printf("\n");
    }
    printf("the maximum sum is %d",max);
}