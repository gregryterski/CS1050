#include<stdio.h>

int main(void)
{
    int x, y;
    //loops the program if the user inputs a number not within 1-10
    do{
    printf("Please enter two positive integers that are less than 10:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    x >= 1 ? printf("") : printf("Error: A must be >=1 and A must be <=10\n");
    x <= 10 ? printf("") : printf("ERROR: A must be >=1 and A must be <=10\n");
    y >= 1 ? printf("") : printf("Error : B must be >=1 and B must be <=10\n");
    y <= 10 ? printf("") : printf("ERROR: B must be >=1 and B must be <=10\n");
    }while(x <= 1 || x >= 10 || y <= 1 || y >= 10);

    int xxCount = 0; //starts the counters at 0
    int yyCount = 0;
    int vvCount = 0;
    int xyCount = 0;
    int num;
    //loops the program for 1-30
    for(num = 1; num <=30; num++) {
    int xx = (num % x == 0);
    int yy = (num % y == 0);

       xx ? printf("%d is divisible by %d\n", num, x) : printf("%d is not divisible by %d\n", num , x); //if divisible print left otherwise print right
       yy ? printf("%d is divisible by %d\n", num, y) : printf("%d is not divisible by %d\n", num , y);
       switch(xx){ //Used to find the differences between A and B for counter
           case 0:
            switch(yy){
               case 0:
               ++xyCount;
               break;
               default:
               ++xxCount;
               break;
           }
           default:
            switch(yy){
               case 0:
               ++yyCount;
               break;
               default:
               ++vvCount;
               break;
           }
           break;
           }
       }
    printf("\n\nBONUS:\n");

    printf("%d were divisible by only A\n", xxCount);
    printf("%d were divisible by only B\n", yyCount);
    printf("%d were divisible by both A and B\n", xyCount);
    printf("%d were divisible by neither A nor B\n", vvCount);

    return 0;
}
