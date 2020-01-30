#include<stdio.h>
void Integer(char f[], int *i);
void Float(char f[], float *i);
void String(char f[], char string[]);
void Array(char f[], int array[]);
void PrintArray(int p[]);

int main(void)
{
    int i;
    float f;
    char s[11];
    int a[11];

    printf("\n***********************\n");
    printf("* Welcome to Prelab 6 *\n");
    printf("***********************\n\n");

    Integer("Please enter and integer and hit enter: ", &i);
    Float("Please enter a float and hit enter: ", &f);
    String("Please enter a string with no spaces and hit enter: ", s);
    Array("Please enter up to 10 postitive integers, enter -1 to end: ", a);

    printf("\n***********************\n");
    printf("You entered %d,%f,%s\n",i,f,s);
    PrintArray(a);
}

void Integer(char f[], int *i)
{
    int h;
    for(h=0; f[h] != '\0'; h++)
    {
    printf("%c", f[h]);
    }

    scanf("%d", i);
}

void Float(char f[], float *i)
{
    int h;
    for(h=0; f[h] != '\0'; h++)
    {
    printf("%c", f[h]);
    }

    scanf("%f", i);
}

void String(char f[], char string[])
{
    int h;
    for(h=0; f[h] != '\0'; h++)
    {
    printf("%c", f[h]);
    }

    scanf("%s", string);
}

void Array(char f[], int array[])
{
    int i = 0; 
    int h;

    for(h=0; f[h] != '\0'; h++)
    {
    printf("%c", f[h]);
    }

    printf("\n");

    for(i = 0; i <= 11; i++)
    {
        printf("\tArray location %d: ", i);
        scanf("%d", &array[i]);

        if((array[i] != -1))
        {
            continue;
        }else
        {
            return;
        }
    }

}

void PrintArray(int p[])
{
    int i;
    for(i=0; p[i] != -1; i++)
    {
    printf("Entry %d = %d\n", i, p[i]);
    }
}

