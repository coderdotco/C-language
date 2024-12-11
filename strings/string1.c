#include<stdio.h>
#include<string.h>
int main(){
    // char str[]="hello world";
    char str[100];
    //scanf("%s",str); //%s se hum string input le sakte hai
    //printf("%s",str); //%s se only the first word will be consideered
    //gets(str); //using this entire sentence  could be taken input 
    //puts(str); 
    //also to fix %s we have another method for scanf
    //scanf("%[^\n]",str);
    //printf("%s",str);
    /*so there are 3 method for input/output : 
            1. direct %c if not used #include<string.h> in scanf/printf
            2. if #include<string.h> used then use %[^\n]s in scanf(%[^\n]s,str) and %s in printf(%s,str)                
            3. if #include<string.h> used then use gets(str) for input and puts(str) for output
            */

}