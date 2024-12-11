#include<stdio.h>
int change(int );
int change(int a){
    a=77;
    printf("the value of a is %d \n",a);
    return 0;

}
int main(){
    int b=22;
    printf("the value of b before is %d\n",b);
    int c=change(b);
    printf("after=%d\n",b);
}