#include<stdio.h>

typedef struct Person
{
    char name[50];
    int age ;
}array ;

int main(){
    array p[] ={{"Alice",50},{"rahul",30},{"ram",40}};
    FILE* ptr=fopen("t2.dat","wb");

    size_t no_of_ele=sizeof(p)/sizeof(p[0]);

    fwrite(p,sizeof(p[0]),no_of_ele,ptr);
    


    
}
