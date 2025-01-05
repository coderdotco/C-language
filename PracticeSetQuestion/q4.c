#include<stdio.h>

struct Product{
    int productid;
    char name[50];
    float price;
    int quantity;

};

void input(struct Product p[],int n){
    for(int i=0;i<n;i++){
        printf("Enter the Detail of product %d \n" ,i+1);
        printf("Enter Product Id :");
        scanf("%d",&p->productid);
        
        printf("Enter Name :");
        scanf(" %[^\n]",p->name);
        printf("Enter Price :");
        scanf("%f",&p->price);
        printf("Enter Quantity :");
        scanf("%d",&p->quantity);
    } 
}

void addtocart(struct Product p[],int n){
    
    float  total=0;
    int pi,qun;
    
    printf("Enter the Product to id (0 to stop)  : ");
    scanf("%d",&pi);

    if(p->productid == pi){
        printf("Enter the quantity of %s",p->name);
        scanf("%d",&qun);
        
    }


    

}

int main(){
    struct Product p[100];
    int n;
    printf("Enter the Number of deatils you want to enter :");
    scanf("%d",&n);
    input(p,n);
    addtocart(p,n);
}