#include<stdio.h>
#include<stdlib.h>
// print muliplcation table of 2 upto 10 first then change it upto 15
int main(){
    int n;
    printf("Enter the value till you want table :");
    scanf("%d",&n);
    int* ptr;
    ptr = (int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        *(ptr + i) = 2*(i+1);
    }
    printf("Table before :\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr + i));
    }
    int a;
    printf("\nEnter the value after want :");
    scanf("%d",&a);
    n=a;
    
    ptr =(int*)realloc(ptr,n*sizeof(int));

    
    for(int i=0;i<n;i++){
        *(ptr + i) = 2*(i+1);
    }
    printf("Table After :\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(ptr + i));
    }

}