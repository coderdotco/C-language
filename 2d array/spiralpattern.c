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
    //simple array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("the spiral pattern is :\n");
    //spiral pattern
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=m-1;
    int tne=n*m;
    int count=0;
    while(count<tne){
        //print minimum row
        for(int i=minr;i<=maxc;i++){
            printf("%d ",arr[minr][i]);
            count++;
        }
        minr++;
        if(count>=tne) break;
        //print  maximum column
        for(int j=minr;j<=maxr;j++){
            printf("%d ",arr[j][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne) break;
        //print maximum row in reverse
        for(int i=maxc;i>=minc;i--){
            printf("%d ",arr[maxr][i]);
            count++;
        }
        maxr--;
        if(count>=tne) break;
        //print minimum column in reverse
        for(int j=maxr;j>=minr;j--){
            printf("%d ",arr[j][minc]);
            count++;
        }
        minc++;



    }
}