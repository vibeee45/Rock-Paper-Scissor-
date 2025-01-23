#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define r 1
#define p 2
#define s 3
void printChoice(int choice) {
    switch(choice) {
        case r:{
         printf("Rock\n");
        break;
        }
        case p:
        {
        printf("Paper\n"); 
        break;
        }
        case s:
        {
        printf("Scissors\n"); 
        break;
        }
        default: printf("Invalid choice\n");
    }
}
int main() {
    int uc, cc,up=0,cp=0;
    srand(time(0));  
    printf("1 = Rock \n2 = Paper \n3 = Scissors ");
    do{
    printf("\nenter your choice:");
    scanf("%d", &uc);
    if (uc < r|| uc > s)
    {
        printf(" Please select 1, 2, or 3.\n");
        return 1;
    }
    cc = rand() % 3 + 1;  
    printf("Your choice: ");
    printChoice(uc);
    printf("Computer's choice: ");
    printChoice(cc);
    if (uc == cc) 
    {
        printf("It's a tie!");
    } 
    else if ((uc == r && cc == s) ||
               (uc == p && cc == r) ||
               (uc == s && cc == p)) {
        printf("You win!");
        up++;
    } 
    else 
    {
        printf("You lose!");
        cp++;
  }
  printf("\npoints of player:%d",up);
  printf("\npoints of computer:%d",cp);
}while(up<5|| cp<5);
if(up==5)
{
    printf("\nFinal winner is player");
}
else
{
    printf("\nFinal winner is computer");
}
return 0;
}

