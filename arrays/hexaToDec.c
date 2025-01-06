#include<stdio.h>
#include<math.h>
int main(){
    char hex[32];
    printf("Enter the hexadecimal value :");
    scanf("%s",hex);
    int count=0,i=0,sum=0;
    while(hex[i]!='\0'){
        count++;
        i++;
    }
    int k=0;
    for(int j=count-1;j>=0;j--){
        if((int)(hex[j]) < 58){
            int rem1=(int)(hex[j]) - 48 ;
            sum=sum + rem1*pow(16,k);
            
        }
        if((int)(hex[j]) > 64){
            int rem2=(int)(hex[j]) - 55 ;
            sum=sum + rem2*pow(16,k);

        }
        k++;

    }
    printf("the Decimal Value is %d",sum);
}