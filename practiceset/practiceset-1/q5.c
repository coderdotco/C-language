#include<stdio.h>
int main(){
    int lcm,a,b;
    printf("Enter the numbers :");
    scanf("%d%d",&a,&b);
    for(lcm=(a>b)?a:b;;lcm++){
        if(lcm%a==0 && lcm%b==0) {
            break;
        }
    }
    printf("the lcm is %d",lcm);
}