#include<stdio.h>

struct Member{
    int second;
};

void conversion(struct Member m){
    int hour = m.second/3600;
    int min = (m.second % 3600)/60;
    int sec = (m.second % 3600)%60;

    printf("Output : %d hour %d min %d sec ",hour,min,sec);
}
int main(){
    struct Member m;
    printf("Enter the seconds :");
    scanf("%d",&m.second);
    conversion(m);
}