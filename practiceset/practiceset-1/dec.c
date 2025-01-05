#include<stdio.h>

void decimalbinary(int n){
    int arr[32],i=0;
    while(n>0){
        arr[i] = n%2;
        printf("%d ",arr[i]);
        i++;
        n=n/2;
        
    }
    printf("\n");
    for(int j=i;j>=0;j--){
        printf("%d",arr[j]);
    }
    
}

void decimalhexa(int n){
    char arr[32];
    int i=0,count=0;

    while(n>0){

        
        
        int remaind = n%16;
        if(remaind < 10 ){
            arr[i] = '0' + remaind;
            
        }
        else arr[i] = 'A' + (remaind-10);
        i++; 
        n=n/16;

        
    }   
    for(int j=i-1;j>=0;j--){
        printf("%c",arr[j]);
    }
    
    
    
    
}


void decimaloct(int n){
    int arr[32],i=0;
    while(n>0){
        arr[i] = n%8;
        printf("%d ",arr[i]);
        i++;
        n=n/8;
        
    }
    printf("\n");
    for(int j=i;j>=0;j--){
        printf("%d",arr[j]);
    }
    
}


int main(){
    int n,a;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Enter what to convert 1.binary 2.hexadecimal 3.octal :");
    scanf("%d",&a);
    switch(a){
        case 1:
            decimalbinary(n);
            break;
        case 2:
            decimalhexa(n);
            break;
        case 3:
            decimaloct(n);
            break;
    }
}