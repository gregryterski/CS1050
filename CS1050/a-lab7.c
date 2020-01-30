#include<stdio.h>

void getstring(char *string);
void stringreplace(char *string, char *pattern, char *replace);
void print(char *string);

int main(void)
{
    char string[255];
    char pattern[31];
    char rstring[31];

    printf("*** Welcome to Lab 7 ***\n");
    printf("Please enter the original string:\n");
    getstring(string);
    printf("Origianl string=");
    print(string);
    printf("Please enter the pattern:\n");
    getstring(pattern);
    printf("Pattern string=");
    print(pattern);
    printf("Please enter the replacement:\n");
    getstring(rstring);
    printf("Replacement string=");
    print(rstring);
    stringreplace(string, pattern, rstring);
    printf("\nThe resultant string is");
    print(string);
    printf("*** Thanks for doing Lab 7 ***\n");
}

void getstring(char *string)
{
    scanf("%s", string);
}

void print(char *string)
{
    printf("\"%s""\"\n", string);
}

void stringreplace(char *string, char *pattern, char *replace)
{
    int i;
    int x=0;

    for(i=0; *(string+i) != 16; i++)
    {
        if((*(pattern+x) == *(string+i)))
        {
            *(string+i) = *(replace+x);

            if((*(pattern+x) == '\0'))
            {
                *(string+i) = *(replace+x);
            }
        
            if((*(replace+x) == '\0'))
            {
                *(string+i) = *(pattern+x);
            } 
            x++;
        }
    }
}
