#include<stdio.h>

int main(){

    int num;
    printf ("\nenter the number to get day\n");
    scanf("%d",&num);
    if (num==1)
    {
        printf("today is sunday");
    }
    else if (num==2)
    {
        printf("today is monday");
    }
    else if (num==3)
    {
        printf("today is tuesday");
    }
    else if (num==4)
    {
        printf("today is wensday");
    }
    else if (num==5)
    {
        printf("today is thusday");
    }
    else if (num==6)
    {
        printf("today is friday");
    }
    else if (num==7)
    {
        printf("today is saturday");
    }
    else
    {
        printf("plz enter the number between 1 to 7");
    }
        
}