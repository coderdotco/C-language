#include<stdio.h>
int main(){
    int a[5]={2,4,6,8,1}; // declaratiion + intialization 
    a[4]=100; // 1 ki jagah 100 change kardega {2,4,6,8,100}
    a[2]=3; // {2,4,3,8,100}
    printf("%d",a[4]); // array a ki 4th index pe jo element hai voh dega
    printf("\n%d\n",a[2]); // array a ki 2th index pe jo element hai voh dega
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }

}