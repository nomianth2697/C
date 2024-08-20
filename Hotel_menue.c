#include<stdio.h>
int main(){
    int va1,ch1;
    int qty;
    printf("\n WELCOME TO RAMA INTERNATIONAL");
    printf("\nenter your choice with following.");
    printf("\n\n\n\n1.idli sambar");
    printf("\n2.vadapao");
    printf("\n3.veg rice");
    printf("\n4.special thali");
    printf("\n5.chinise");
    printf("\nenter your choice");
    scanf("\n%d",&va1);
    
    switch (va1){
    case 1: printf("you enter idli sambhar");
            printf("enter wich type of idli you want");
            printf("\n1.maharastrian");
            printf("\n2.south indian");
            printf("\n3.jain special");
            scanf("%d",&ch1);
            switch (ch1){
            case 1: printf("\nthe bill of this resipi is 30 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*30));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*30));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*30));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 2: printf("\nthe bill of this resipi is 40 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*40));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*40));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*40));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 3: printf("\nthe bill of this resipi is 50 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*50));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*50));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*50));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            
            default:
                break;
            }
        break;
    case 2: printf("you enter vadapao");
            printf("enter wich type of idli you want");
            printf("\n1.mumbai");
            printf("\n2.nagpur");
            printf("\n3.jain special");
            scanf("%d",&ch1);
            switch (ch1){
            case 1: printf("\nthe bill of this resipi is 20 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*20));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*20));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*20));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 2: printf("\nthe bill of this resipi is 15 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*15));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*15));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*15));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 3: printf("\nthe bill of this resipi is 10 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*10));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*10));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*10));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            
            default:
                break;
            }
        break;
    case 3: printf("you enter veg rise");
            printf("enter wich type of idli you want");
            printf("\n1.chinise");
            printf("\n2.maharashtrian");
            printf("\n3.delhi");
            scanf("%d",&ch1);
            switch (ch1){
            case 1: printf("\nthe bill of this resipi is 60 rs per plate");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*60));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*60));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*60));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 2: printf("\nthe bill of this resipi is 40 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*40));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*40));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*40));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 3: printf("\nthe bill of this resipi is 50 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*50));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*50));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*50));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            
            default:
                break;
            }
        break;
    case 4: printf("you enter special thali");
            printf("enter wich type of thali you want");
            printf("\n1.maharastrian");
            printf("\n2.south indian");
            printf("\n3.jain special");
            scanf("%d",&ch1);
            switch (ch1){
            case 1: printf("\nthe bill of this resipi is 250 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*250));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*250));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*250));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 2: printf("\nthe bill of this resipi is 200 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*200));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*200));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*200));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 3: printf("\nthe bill of this resipi is 180 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*180));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*180));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*180));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            
            default:
                break;
            }
        break;
    case 5: printf("you enter chinise");
            printf("enter wich type of chinise dish you want");
            printf("\n1.manchurian");
            printf("\n2.hakka nudels");
            printf("\n3.fired rice");
            scanf("%d",&ch1);
            switch (ch1){
            case 1: printf("\nthe bill of this resipi is 60 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*30));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*60));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*60));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 2: printf("\nthe bill of this resipi is 100 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*100));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*100));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*100));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            case 3: printf("\nthe bill of this resipi is 50 rs");
                    printf("\nenter how many dishes you want");
                    scanf("%d",&qty);
                    switch (qty){
                    case 1:printf("\nyou enterd 1 dish");
                        printf("\nyour bill is:%d",(1*50));
                        break;
                    case 2:printf("\nyou enterd 2 dish");
                        printf("\nyour bill is:%d",(2*50));
                        break;
                    case 3:printf("\nyou enterd 3 dish");
                        printf("\nyour bill is:%d",(3*50));
                        break;
                    default:printf("enter dishes between 1,2 or 3 ");
                        break;
                    }    
                break;
            
            default:
                break;
            }
        break;
    
    default: printf("THANK YOU FOR VISITING OUR RESTRORENT...");
        break;
    }
    
}