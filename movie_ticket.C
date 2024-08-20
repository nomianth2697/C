#include <stdio.h>
int main(){
    int wood,m_name,timing,seat,qty,bill;
    printf("\n\n\n\n\nwelcome to hindi palece....");
    printf("\nwich type of movie you want to watch");
    printf("\n 1.holywood");
    printf("\n 2.bollywood");
    printf("\n 3.tolywood");
    printf("\nenter your choice. \t");
    scanf("%d",&wood);
    switch (wood){
        case 1:
            printf("\n\nwitch holywood movie you want to choose.") ;
            printf("\n1.Avengers: infinity war") ;
            printf("\n2.Avengers: endgame") ;
            printf("\n3.the dark knight") ;
            printf("\n4.godfather") ;
            printf("\nente your choice:\t") ;
            scanf("%d",&m_name);
            switch (m_name){
            case 1:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 2:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 3:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 4:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            
            default:
                break;
            }

        break;
        case 2:
            printf("\n\nwitch holywood movie you want to choose.") ;
            printf("\n1.kgf-chapter 2") ;
            printf("\n2.gadar 2") ;
            printf("\n3.deva") ;
            printf("\n4.3 ediots") ;
            printf("\nente your choice:\t") ;
            scanf("%d",&m_name);
            switch (m_name){
            case 1:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 2:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 3:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 4:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            
            default:
                break;
            }

        break;
        case 3:
            printf("\n\nwitch holywood movie you want to choose.") ;
            printf("\n1.magadheera") ;
            printf("\n2.bahubali 2") ;
            printf("\n3.RRR") ;
            printf("\n4.astin ka saap") ;
            printf("\nente your choice:\t") ;
            scanf("%d",&m_name);
            switch (m_name){
            case 1:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 2:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 3:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            case 4:
                printf("\nenter the time of show ");
                printf("\n1. 12 to 3 ");
                printf("\n2. 3 to 6 ");
                printf("\n3. 6 to 9 ");
                printf("\n4. 9 to 12 ");
                printf("\nenter your choice.. ");
                scanf("%d", &timing);
                switch (timing) {
                case 1:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 2:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 3:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                case 4:
                    printf("\nwitch type of seting position you want.");
                    printf("\n1.freant row .");
                    printf("\n2.middle row");
                    printf("\n3.last row");
                    printf("\nenter your choice");
                    scanf("%d",&seat);
                    switch (seat){
                    case 1:
                        printf("\nthe prise first row seat is: 250 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*250);
                        printf("your bill is : %d",bill);
                        break;
                    case 2:
                        printf("\nthe prise middle row seat is: 350 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*350);
                        printf("your bill is : %d",bill);
                        break;
                    case 3:
                        printf("\nthe prise first row seat is: 500 rs. for each. ");
                        printf("\nhow many seat you want.. ");
                        scanf("%d",&qty);
                        bill = (qty*500);
                        printf("your bill is : %d",bill);
                        break;
                    
                    default:
                        break;
                    }
                    break;
                
                default:
                    break;
                }
                break;
            
            default:
                break;
            }

        break;
    
    default:
        break;
    }
    

        printf("\n\n\tthank you for visiting our palace");


    return 0;
}