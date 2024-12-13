#include<stdio.h>
int main(){
    //r,w,a,r+,w+,a+ - text  - .txt
    // rb,wb,ab,rb+,wb+,ab+ - binary  - .dat

    int a; // declare
    a=3; // intialize
    FILE* p ; 
    // fopen("file_name","mode_of_opening");

    p = fopen("t2.txt","a+");
    // r+ - file should present 
    //  w+ - overwrites data
    // a+ - does not overwrite data
    // fclose(<file_variable_name>);

    


}