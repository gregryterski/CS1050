#include<stdio.h>

void getstring(char *string);
void flipstring(int *s, char *string);
void stringlength(int *s, char *string);

int main(void)
{
    char string[255];
    int stringl=NULL;

    printf("*** Welcome to Prelab 7 ***\n");
    printf("Please enter a string: ");
    getstring(string);
    printf("You entered: %s\n", string);
    stringlength(&stringl, string);
    printf("The string is %d in legnth\n", stringl);
    flipstring(&stringl, string);
    printf("The switched stiring is %s\n", string);
    stringl=0;
    stringlength(&stringl, string);
    printf("The string is %d in length\n", stringl);
    printf("*** Thank you for using Prelab 7 ***\n");

}

void getstring(char *string)
{
    scanf("%s", string);
}

void flipstring(int *s, char *string)
{
    char x = *(string+(*s-1));
    *(string+(*s-1))= *(string+0);
    *(string+0) = x;
}

void stringlength(int *s, char *string)
{
    int i;
    for(i=0; string[i] != '\0'; i++)
    {
        (*s)++;
    }
}
