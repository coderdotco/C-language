#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer
    {
        char name[20];
        int age;
        int noofmatches;
        float avgruns;
    } cricketeris ;
    
    cricketeris arr[3];
    for(int i=0;i<3;i++){
        printf("NAME :");
        scanf("%s",arr[i].name);

        printf("AGE :");
        scanf("%d",&arr[i].age);

        printf("NUMBER OF MATCHES :");
        scanf("%d",&arr[i].noofmatches);

        printf("AVERAGE :");
        scanf("%f",&arr[i].avgruns);

    }
    
    //output
    for(int i=0;i<3;i++){
        printf("\nNAME : %s",arr[i].name);
        printf("\nAGE : %d",arr[i].age);
        printf("\nNO OF MATCHES : %d",arr[i].noofmatches);
        printf("\nAVERAGE RUNS : %f",arr[i].avgruns);
    }
}