#include<stdio.h>
#include<string.h>
#include<time.h>

struct book{
    char b_title[50];
    char b_author[50];
    char b_publi[50];
    int price;

};

int main(){
    int n;
    scanf("%d",&n);

    struct book b[n];

    for(int i=0;i<n;i++){
        printf("Enter the details of book %d in order of \n1.book title\n2.book author\n3.book publication\n4.price: \n ",i);
        scanf("%s",&b[i].b_title);
        scanf("%s",&b[i].b_author);
        scanf("%s",&b[i].b_publi);
        scanf("%d",&b[i].price);
        
    }
    printf("The books are :\n");
    for(int i=0;i<n;i++){
        printf("%s\n",b[i].b_title);
        printf("%s\n",b[i].b_author);
        printf("%s\n",b[i].b_publi);
        printf("%d\n",b[i].price);
    }
    
}