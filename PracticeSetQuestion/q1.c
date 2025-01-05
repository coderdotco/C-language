#include<stdio.h>
#include<string.h>
// creating a structure
struct Book
{
    int bookId;
    char title[100];
    char author[50];
    float price;
    int availability;

};

// function to input books 
void inputBooks(struct Book b[] ,int n){
    for(int i=0;i<n;i++){
        printf("Enter the detail of book %d\n",i+1);
        printf("Book id : ");
        scanf("%d",&b[i].bookId);
        printf("Book Title : ");
        scanf("%s",b[i].title);
        printf("Book Author : ");
        scanf("%s",b[i].author);
        printf("Book Price : ");
        scanf("%f",&b[i].price);
        printf("Book Availability ( 0 or 1 ) : ");
        scanf("%d",&b[i].availability);


    }
}

// to seach books

void searchbook(struct Book b[], int  n){
    int choice ;
    printf("Enter the way you want to search (1. id or 2.title) :");
    scanf("%d",&choice);

    if(choice ==1 ){
        int id;
        printf("Enter the id :");
        scanf("%d",&id);
        int present = 0; 
        for(int i=0;i<n;i++){
            if(id == b[i].bookId) {
                present =1 ; 
                printf("Id : %d , Title : %s , Author : %s , Price : %.2f , Availability : %d  ",
                b[i].bookId,b[i].title,b[i].author,b[i].price,b[i].availability);
            }
        }
        
        if(present == 0) 
            printf("The id Entered is not in list . Please enter valid id !");
        
    }

    else{
        if(choice==2 ){
            char copytitle[50]; 
            int present =0; 
            printf("Enter the Title :");
            scanf("%s",copytitle);
            for(int i=0;i<n;i++){
                if(strcmp(copytitle,b[i].title)==0 ) {
                    present =1 ; 
                    printf("Id : %d , Title : %s , Author : %s , Price : %.2f , Availability : %d  ",
                    b[i].bookId,b[i].title,b[i].author,b[i].price,b[i].availability);
                }
            }

            if(present==0) {
                printf("The Title entered is not  in the list. Please enter correct book title !\n");
            }
        }
        else{
            printf("Invalid choice . Please Enter a valid choice !\n");
        }
    }
}


// dislpay books by specific author 
void display(struct Book b[],int n){
    char copyAuthor[100];
    int present =0 ;
    printf("\nEnter the Author :");
    scanf("%s",copyAuthor);
    for(int i=0;i<n;i++){
    
        if(strcmp(copyAuthor,b[i].author)== 0 ) {
            present =1;
            printf("Title : %s , Id : %d , Price : %.2f \n",b[i].title,b[i].bookId,b[i].price);
            
        }
        
    }
    if(present ==0 ){
        printf("\nInvalid Author entered\n ");

    }

}

// avaliable books to file 
void bookwrite(struct Book b[],int n){
    FILE* ptr = fopen("library.txt","w");
    for(int i=0;i<n;i++){
        if(b[i].availability){
            fprintf(ptr,"%d,%s,%s,%.2f \n" , b[i].bookId,b[i].title,b[i].author,b[i].price);

        }

    }

    fclose(ptr);
    printf("File is successfully written "); 
}
int main(){
    int n;
    printf("Enter the number of books you want to add details :");
    scanf("%d",&n);
    struct Book b[n];
    inputBooks(b , n);
    searchbook(b,n);
    display(b,n);
    bookwrite(b,n);

    
    
    
    


    

}
