#include<stdio.h>
#include<ctype.h>

#define TESTSTRING1 "Jim Ries....Is1234Cool"
#define TESTSTRING2 "cs1050is great"
#define TESTSTRING3 ""
#define TESTSTRING4 "!!!#123Once\tThere_was a way\nto^get((back))homeward.123\n"

void ToUpperWord(char *string, int n);
int getn(char *base, char target[10][20]);

int main(void)
{
    char arr1[10][20];
    char arr2[10][20];
    char arr3[10][20];
    char arr4[10][20];
    getn(TESTSTRING1, arr1);
    getn(TESTSTRING2, arr2);
    getn(TESTSTRING3, arr3);
    getn(TESTSTRING4, arr4);
    printf("****Original test #1: ""%s""\n", TESTSTRING1);
    ToUpperWord(TESTSTRING1, 0);
    ToUpperWord(*arr1, 3);
    ToUpperWord(*arr1, 5);
    ToUpperWord(*arr1, 7);
    printf("\n\n");
    printf("****Original test #2: ""%s""\n", TESTSTRING2);
    ToUpperWord(TESTSTRING2, 0);
    ToUpperWord(*arr2, 3);
    ToUpperWord(*arr2, 5);
    ToUpperWord(*arr2, 7);
    printf("\n\n");
    printf("****Original test #3: ""%s""\n", TESTSTRING3);
    ToUpperWord(TESTSTRING3, 0);
    ToUpperWord(*arr3, 3);
    ToUpperWord(*arr3, 5);
    ToUpperWord(*arr3, 7);
    printf("\n\n");
    printf("****Original test #4: ""%s""\n", TESTSTRING4);
    ToUpperWord(TESTSTRING4, 0);
    ToUpperWord(*arr4, 3);
    ToUpperWord(*arr4, 5);
    ToUpperWord(*arr4, 7);
}

int getn(char *base, char target[10][20])
{
    int n=0;
    int j=0;
    int i;

    for(i=0; base[i] != '\0'; i++)
    {
        if(0 == isalpha(base[i]))
        {
            target[n][j++] = base[i];
        }
        else{
            target[n][j++] = '\0';
            n++;
            j=0;
        }
    }
    return n;
}

