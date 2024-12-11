#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<7;i++){
        if(i%2==0){
            evensum=evensum +arr[i];
        }
        else{
            oddsum=oddsum +arr[i];
        }
        

    }
    
    printf("the diffeerence in the sum of even and odd is %d",evensum-oddsum);
    
}