#include<stdio.h>
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("enter the number :");
    scanf("%d",&x);
    int count=0;

    for(int i=0;i<8;i++){
        int a=arr[i];
        for(int j=0;j<8;j++){
            for(int k=0;k<8;k++){
                if(a+ arr[j] + arr[k] ==x){
                    count++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                
                } 
            }
        }
    }
    printf("the no of triplets are %d",count);
}