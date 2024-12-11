#include<stdio.h>
typedef struct People       
{
    char name[50];
    int age;
} array;

int main(){
    FILE* ptr = fopen("t2.dat","rb");
    
    fseek(ptr,0,SEEK_END);
    size_t f_size = ftell(ptr);
    fseek(ptr,0,SEEK_SET);
    size_t no_of_ele =f_size / sizeof(array);

    array p[no_of_ele];

    fread(p,sizeof(array),no_of_ele,ptr);
    for(size_t i=0;i<no_of_ele;i++){
        printf("%s %d \n",p[i].name,p[i].age);
    }


}
