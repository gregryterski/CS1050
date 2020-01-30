#include<ctype.h>
#include<stdio.h>

void ToUpperWord(char *string, int n)
{

    if(n==0)
    {
        printf("*** Error:The %dth word was not found in the string %s\n", n, string);
        printf("After trying the %d: %s\n", n, string);
    }
    else{
        while(string[n] != '\0')
        {
            string[n] = toupper(string[n]);
            n++;
        }
        printf("%s\n", string);
    }
}
