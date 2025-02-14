#include<stdio.h>
#include<stdlib.h>

// linear search 
void linear(int arr[],int n,int key){
    printf("\nPerforming linear search :\n");
    for(int i=0;i<n;i++){
        if(key == arr[i]){
            printf("\nFound at %d index \n",i);
        }
    }
}

// binary search
void binary(int arr[],int n,int key){
    printf("Performing binary search :\n");
    int l = 0;
    int h  = n-1;
    int m;
    while(l<=h){
        m = (l+h)/2;
        if(key == arr[m]){
            printf("\nElement found at %d index \n",m);
            return; 

        }
        if(key < arr[m]){
            h = m-1;
        }
        if(key > arr[m]){
            l = m+1 ;
        }
    }
    printf("\nKey not found ! \n");

}


void exited(){
    printf("You have exited : ");
    exit(0);
}
int main(){
    int arr[] = {1,3,5,6,7,9,10,12,13,15,19,20};
    int n = sizeof(arr)/ sizeof(int);
    char ch;
    int key;
    do{
        printf("Enter the key you want to search : ");
        scanf("%d",&key);
        int a ; 
        printf("Enter the Operation you want : ");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            linear(arr,n,key);
            break;
        case 2:
            binary(arr,n,key);
            break;
        case 3:
            // fibonachi(arr,n,key);
            // break;
        case 4:
            exited();
            break;
        default:
            printf("Invalid operation ");
            break;
        }

        
        printf("Do you want to continue the operation (y or n) : ");
        scanf(" %c",&ch);


    }while(ch=='y' || ch=='Y');


    return 0;
}