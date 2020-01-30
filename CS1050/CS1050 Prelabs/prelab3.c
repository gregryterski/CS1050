#include<stdio.h>

int main(void)
{
    int x;
    for(x = 1; x<= 30; x++)
    {
        while(x % 5 == 0)
        {
            printf("%d is divisible by 5\n", x);
            break;
        }
        while(x % 5 != 0)
        {
            printf("%d is not divisible by 5\n", x);
            break;
        }
    }
    return 0;
}

