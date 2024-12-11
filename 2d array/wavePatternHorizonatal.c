#include<stdio.h>
int main(){
    int n,m;
    printf("enter the no of rows and columns :");
    scanf("%d %d",&n,&m);

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the number :");
            scanf("%d",&arr[i][j]);
        }
    }
   //wave pattern
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                printf("%d ",arr[i][j]);

            }

        }
        else{
            for(int i=n-1;i>=0;i--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    } 
}