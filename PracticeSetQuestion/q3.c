#include<stdio.h>

int main(){
    int arr[3][3]={{1,0,1},{0,0,1},{0,1,1}};
    int n,r,c,rb,cb;
    char ch,chb;
    printf("Remember 1 = Seat Reserved, 2=Seat Available \n");
    printf("Enter 1.Booking seat 2.Canceling the seat :");
    scanf("%d",&n);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    if(n==2 ){
        do{
            printf("Enter the seat  number you want to cancel :");
            printf("\nThe seat number should contain row number (1-3) and column number(1-3) :\n");
            printf("Enter the row number :");
            scanf("%d",&r);
            printf("Enter the column number :");
            scanf("%d",&c);

            if(arr[r-1][c-1]==0){
                printf("\nThe seat is not been booked by anybody \n");
            }
            if(arr[r-1][c-1]==1){
                arr[r-1][c-1]=0;
                printf("The Entered seat number has been canceled Successfully \n");
            }

            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }

            
            printf("Do you want to again Cancel the seat(y or Y or n or N) :");
            scanf(" %c",&ch);
            
        }while(ch=='y' || ch=='Y');
        
        printf("You have succesffully done the transaction :");

    }

    if(n==1){
        printf("Enter the seat you want to book :");
        printf("\nEnter the row number(1-3) and column number(1-3) :\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }

        do{
            
            printf("\nEnter the row number :");
            scanf("%d",&rb);
            printf("Enter the column number :");
            scanf("%d",&cb);

            if(arr[rb-1][cb-1]==1){
                printf("Entered seat is been already researved. You cannot book it !\n");

            }
            if(arr[rb-1][cb-1]==0){
                arr[rb-1][cb-1]=1;
                printf("\nYou have successfully booked the seat \n");
            }

            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    printf("%d ",arr[i][j]);
                } 
                printf("\n");
            }
            printf("\nDo you want to book the seat again (y ,Y ,n,N):");
            scanf(" %c",&chb);


            
        }while(chb=='y' || chb=='Y');
        printf("\nyou have successfully done the transcaction ");
        

    }


    

}