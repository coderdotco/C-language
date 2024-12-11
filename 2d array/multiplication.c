#include<stdio.h>
int main(){
    int r1,r2;
    int c1,c2;
    printf("\nenter the row of 1st matrix :");
    scanf("%d",&r1);
    printf("\nenter the column of 1st matrix :");
    scanf("%d",&c1);
    printf("\nenter the row of 2st matrix :");
    scanf("%d",&r2);
    printf("\nenter the column of 2st matrix :");
    scanf("%d",&c2);
    int a[r1][c1];
    int b[r2][c2];
    
    if(c1==r2){
        int res[r1][c2];
        printf("enter the elements of 1st matrix :\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                printf("enter the number :");
                scanf("%d",&a[i][j]);
            }
        }
        

        printf("\nenter teh elements of 2nd matrix :\n");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                printf("enter the number :");
                scanf("%d",&b[i][j]);
            }
        }
        int k;
        int cr=c1;
        //multiplication
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                res[i][j]=0;
                for(int k=0;k<cr;k++){
                    res[i][j]+=a[i][k]*b[k][j];

                
                }
            }
        }
        //output
        printf("the resultant matrix is :\n");
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("error! rows columns not matched");
    }

}