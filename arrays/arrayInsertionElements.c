#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of arr :");
    scanf("%d",&n);
    int arr[n] ;
    //input 
    printf("Enter the elements of the array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // element and position 
    int ele,pos;
    printf("Enter the elements you want to insert :");
    scanf("%d",&ele);
    printf("\nEnter the position you want to add :");
    scanf("%d",&pos);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //insertion
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
        
    }
    arr[pos-1]=ele;

    //output
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    
}