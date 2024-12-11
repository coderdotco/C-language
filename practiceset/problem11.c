#include <stdio.h>
#include <math.h>
/*int main(){

    int a,b;
    printf("enter the sides of a rectangle:");
    scanf("%d%d",&a,&b);
    printf("\nthe perimeter of rectangle is %d",2*(a+b));
    return 0;


}*/
// second question
/*int main(){
    char digit;
    printf("digit:");
    scanf(" %c",&digit);
    printf("ascci value is %d\n",digit);
    if (digit> '0' && digit <'9')
    {
        printf("the character is digit");
    }
    else
    printf("not digit");
    return 0;

}*/
// THIRD QUESTION
/*int main(){
    int a=4,smallest;
    int b=5,c=2;
    if( a<b && a<c)
    smallest=a;
    else if(b<a && b<c)
    smallest=b;
    else
    smallest=c;
    printf("the smallest of three numbers is %d",smallest);

}*/
// fourth question
/*int main(){
    int a,n,count=0,b,sum=0;
    printf("write number:");
    scanf("%d",&a);
    n=a;
    while(n>0)
    {
        n=n/10;
        count++;


    }
    n=a;
    while(n>0)
    {
        b=n%10;
        sum=sum+pow(b,count);
        n=n/10;


    }
    if(sum==a)
    printf("%d is an armstrong number ",a);
    else
    printf("%d is not an armstrong number ",a);
    return 0;

}*/

// fifth question
/*int main(){
    int a;
    printf("number :");
    scanf("%d",&a);
    if( a>0)
    printf("%d  is a natural number ",a);
    else
    printf("%d is not a natural number",a);
    return 0;

}*/
// sixth question
/*int main(){
    char a='*';
    int i=1,j,b=4,c=5;
    while ( i<=b)
    {
        j=1;
        while(j<=c)
        {
            printf(" %c",a);
            j++;
        }
        printf(" \n");
        i++;
    }
}
*/
// seventh  question
/*int main(){
    int a,i=2;
    int notprime=0;
    printf("enter the  number:");
    scanf("%d",&a);
    while (i<a)
    {
        if(a%i==0)
        {
            notprime=1;
        }
        i++;
    }
    if(notprime)
    printf("the number is not prime");
    else
    printf("number is prime");
}*/

/*int main(){
    int a,n,sum=0;
    printf("the number is:");
    scanf("%d",&a);
    n=a;
    while(n!=0)
    {
        int b;
        b=n%10;
        sum=sum+b;
        n=n/10;


    }
    printf("the sum of the number %d is %d",a,sum);

}*/

/*int main(){
    int a;
    float b;
    printf("the number is :");
    scanf("%d",&a);
    b=sqrt(a);
    printf("the  square root of a number is %.2f",b);
}*/

/*int main(){
    int start,end,i=0;
    printf("enter the start:");
    scanf("%d",&start);
    printf("\nenter the end:");
    scanf("%d",&end);
    i=start;

    while (i<=end)
    {   if(i % 2 != 0 )
        printf("%d\t",i);

        i++;


    }
    printf("\n");
}*/

/*int main(){
    int a,n,b,rev,c,d;
    printf("enter the number");
    scanf("%d",&a);
    n=a;


    b=n%10;
    c=(n/10)%10;
    d=((n/10)/10)%10;
    rev=b*100+c*10+d;



    printf("reverse is %d",rev);

}*/

/*int main(){
    int a,prime=0,i=2;
    printf("enter the number :");
    scanf("%d",&a);
    if(a<2)
    prime=0;
    else
    {
        while(i<a)
        {
            if(a%i==0)
            prime=1;

            i++;


        }
    }
    if(prime)
    printf("  not prime numebr");
    else
    printf("prime");
}*/

/*int main(){
    int num,fact=1,i=1;
    printf("enter the number");
    scanf("%d",&num);
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("%d",fact);

}*/

int main()
{
    int a, notprime = 0, i = 2;
    printf("enter the number ");
    scanf("%d", &a);
    if (a == 2 || a == 1 || a == 0)

        notprime = 1;
    else
    {
        while (i < a)
        {
            if (a % i == 0)
                notprime = 1;
            i++;
        }
    }

    if (notprime)
        printf("not prime");
    else
        printf("prime");
}