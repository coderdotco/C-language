#include<stdio.h>
#include<math.h>

int hextodec(char hex[]){
    int i=0,count=0,sum=0;
    while(hex[i]!='\0'){
        count++;
        i++;
    }
    int k=0;
    for(int j=count-1;j>=0;j--){
        if((int)(hex[j]) < 58){
            int rem1=(int)(hex[j]) - 48;
            sum = sum + rem1*pow(16,k);
        }
        if((int)(hex[j]) > 64){
            int rem2= (int)(hex[j])  -  55;
            sum = sum + rem2*pow(16,k);
        }
        k++;
    }

    return sum;
}

void dectooct(int dec){
    int arr[32];
    int i=0;
    while(dec>0){
        
        arr[i]=dec % 8 ;
        i++;
        dec=dec/8;
    }

    for(int j=i;j>=0;j--){
        printf("%d",arr[j]);
    }
}

int main(){
    char hex[32];
    printf("Enter the hexadecimal value :");
    scanf("%s",hex);
    int dec = hextodec(hex);
    printf("\nDec = %d \n ",dec);
    dectooct(dec);

}