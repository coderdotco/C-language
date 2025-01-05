#include<stdio.h>
int main(){
    FILE* p1=fopen("p1.txt","r");
    FILE* p2=fopen("p2.txt","r");
    FILE* p3=fopen("p3.txt","w");

    char content[255];
    while(fgets(content,255,p1)!=NULL){
        fputs(content,p3);

    }
    
    while(fgets(content,255,p2)!=NULL){
        fputs(content,p3);

    }


}