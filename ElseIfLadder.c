
// if else if ladder


#include<stdio.h>
void main()
{
    float marks;
    printf("\nenter your marks to get your report\n");
    scanf("%f",&marks);
    if (marks>=90 && marks<100)
    {
        printf("your you get A grade");
    }
    else if (marks>=75 && marks<90)
    {
        printf("your you get B grade");
    }
    else if (marks>=60 && marks<75)
    {
        printf("your you get c grade");
    }
    else if (marks>=35 && marks<60)
    {
        printf("your you get D grade");
    }
    else if (marks>=0 && marks<35)
    {
        printf("you are failed !");
    }
    else
    {
        printf("enter the valid marks");
    }
}