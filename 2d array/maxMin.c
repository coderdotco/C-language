#include<stdio.h>
int main(){
    int arr[2][2]={ 3,0,4,1};
    int max=arr[0][0];
    int min=arr[0][0];
    int ai,aj;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(min>arr[i][j]) min=arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(max==arr[i][j]){
                ai=i;
                aj=j;
            }
            if(min==arr[i][j]){
                aj=i;
                ai=j;
            }
        }
    }
    
    
    printf("max = %d and index is (%d,%d)",max,ai,aj);
    printf("\nmin = %d and index is (%d,%d)",min,aj,ai);

}