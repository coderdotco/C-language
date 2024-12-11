#include<stdio.h>
int main(){
    int r,c;
    printf("enter the number of rows :");
    scanf("%d",&r);
    printf("enter the number of columns :");
    scanf("%d",&c);
    
    int arr[r][c];
    int arc[r][c];
    int arcc[r][c];
    printf("enter the elements of 1st matric :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("enter the elements of 2nd matric :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arc[i][j]);
        }
    }
    printf("the matric after the addition of the two matrix are :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j] +arc[i][j]);
        }
        printf("\n");
    }
}