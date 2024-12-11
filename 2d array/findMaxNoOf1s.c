#include<stdio.h>
int main(){
    int arr[3][3];
    int max=-1;
    int summax =-1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the no :");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++){
        int count =0;
        for(int j=0;j<3;j++){
            if( arr[i][j]==1)
            count++;

        }
        if(max<count ){
            max=count;
            summax=i;

            
            
        }
        printf("%d row has %d 1's \n",i,count);

    }
   
    printf("the maximum 1s having row is %d ",summax);
}