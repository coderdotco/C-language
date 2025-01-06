#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int flag = 0,a=n,count;
    while(a>0){
        count++;
        a=a/10;
    }
    
    for(int i=0;i<count;i++){
        int rem = n%10;
        if(rem > 1){
            flag= 1;
            break;

        }
        else if( rem ==0 || rem==1){
            
            n=n/10;
            
        }
    }

    if(!flag) printf("its a binary number");
    else printf("its not a binary number ");
}