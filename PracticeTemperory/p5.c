#include<stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("t3.dat","rb");
    // fseek(<file variable> , how many bits to shift , what function );
    
    // fseek,ftell, 

    //fseek(ptr,5,SEEK_CUR)
    // ftell(ptr);
    int a[5];
    //fwrite(a,sizeof(a[0]),sizeof(a)/sizeof(int),ptr);
    fseek(ptr,0,SEEK_END);
    int  f_size = ftell(ptr);
    fseek(ptr,0,SEEK_SET);
    int no_of_ele =f_size/sizeof(int);
    fread(a,sizeof(int),no_of_ele,ptr);
    for(int i=0;i<no_of_ele;i++){
        printf("%d ",a[i]);
    }
    
    rewind(ptr);
    feof(ptr);
    ferror(ptr);
    


}