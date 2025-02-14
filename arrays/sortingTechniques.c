#include<stdio.h>


void swap(int* smallest , int* i ){
    int temp = *smallest ; 
    *smallest = *i;
    *i = temp;
}

// bubble sort
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\nPerforming bubble sort : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

// insertion sort 
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int currEle = arr[i];
        int previous = i - 1;
        while(previous >=0 && arr[previous] > currEle ){
            arr[previous +1 ]= arr[previous];
            previous--;
        }
        arr[previous +1 ]= currEle ;


    }

    printf("\nPerforming Insertion  sort : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

// selection sort 
void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int smallestIdx = i;
        for(int j = i +1 ;j < n ;j++){
            if(arr[smallestIdx] > arr[j]){
                smallestIdx = j;
            }

        }

        swap(&arr[smallestIdx] , &arr[i]);
    }

    printf("\nPerforming Selection  sort : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}





int main(){
    int arr[100],n;
    printf("Enter the size of the arr ");
    scanf("%d",&n);
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    char ch;
    do{
        int a; 
        printf("enter the operation : ");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            bubblesort(arr,n);
            break;
        case 2 :
            insertionsort(arr,n);
            break;
        case 3 :
            selectionsort(arr,n);
            break;
        case 4:
            mergesort(arr,n);
            break;
        // case 5:
        //     quicksort(arr,n);
        //     break;
        // case 6:
        //     exited();
            break;
        default:
            break;
        }
        printf("Do you want more operation : ");
        scanf(" %c",&ch);
    }while(ch == 'y' || ch == 'Y');
    return 0 ;
}