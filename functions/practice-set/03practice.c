#include<stdio.h>
float phy(int);
float phy(int a){
    float b=a*9.8;
    return b;


}
int main(){
    int x=10;
    printf("the force for mass of %d is %.2f",x,phy(x));
}
