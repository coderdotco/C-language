#include<stdio.h>
int main(){
    int n,ismagic=1;
    printf("Enter the n:");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the values of matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int row[n];
    int column[n];
    int daigonal[2]={0};
    int sum;

    // row addtions 
    for(int i=0;i<n;i++){
        row[i]=0;
        for(int j=0;j<n;j++){
            row[i]= row[i] + arr[i][j];
        }
        if(i>=1){
            if(row[i]!=row[i-1]){
                ismagic=0;
                break;
            }
        }


    }
    
    // column addition 
    for(int i=0;i<n;i++){
        column[i]=0;
        for(int j=0;j<n;j++){
            column[i]= column[i] + arr[j][i];
            
        }
        if(i>=1){
                if(column[i]!=column[i-1]){
                    ismagic=0;
                    break;
                }
            }

    }
   
    //daigonal addtion

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( (i==j)){
            daigonal[0]= daigonal[0] + arr[i][j];
            }
            if((i+j) == (n-1)){
                daigonal[1]+=arr[i][j];
            }
            
            }
        }

    if(daigonal[0]!=daigonal[1]){
        ismagic=0;
    }

    if(ismagic){
        printf("Its a magic square :");

    }
    else printf("Its not a magic square ");
    

}