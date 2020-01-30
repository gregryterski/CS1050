#include<stdio.h>

/*Prototypes*/
void GetPromptString(char *output);
void PromptAndGetFloat(char *prompt, float *output, float lowerlimit, float upperlimit);
void GetQuotient(float dividend, float divisor, float *quotient);

int main(void)
{
    char output1[31];   //stores the string of the first variable up to 31
    char output2[31];   //stores the string of the second variable up to 31
    float dividend;
    float divisor;
    float quotient;
    float lowerlimit1 = -123.199997;    //lower limit for Dividend
    float upperlimit1 = 71.400002;      //upper limit for Dividend
    float lowerlimit2 = -5.500000;
    float upperlimit2 = 6.100000;

    printf("\n***********************\n");  //prints welcome message
    printf("* Welcome to Lab 6    *\n");
    printf("***********************\n\n");

    printf("Enter the prompt for the first variable: ");    //gets the first string and stores it in output1
    GetPromptString(output1);
    printf("Enter the prompt for the second variable: ");   //gets the second string and stores it in output2
    GetPromptString(output2);

    PromptAndGetFloat(output1, &dividend, lowerlimit1, upperlimit1);    //grabs a value for dividend
    PromptAndGetFloat(output2, &divisor, lowerlimit2, upperlimit2); //grabs a value for divisor
    GetQuotient(dividend, divisor, &quotient);  //gets a value for quotient with the two input values (dividend and divisor

    printf("The quotient of %f and %f is %f\n", dividend, divisor, quotient);   //prints the quotient
    printf("\n***********************\n");
}

void GetPromptString(char *output)  //user inputs a string
{
    scanf("%s", output);
}

void PromptAndGetFloat(char *prompt, float *output, float lowerlimit, float upperlimit) //user inputs a string and gives and error if not within the limits
{
    do{
        printf("%s (range %f to %f): ", prompt, lowerlimit, upperlimit);
        scanf("%f", output);

        if(*output>upperlimit || *output<lowerlimit)    //gives the user an error if not within limits
        {
            printf("***Error: you must enter a value in the range %f to %f ***\n", lowerlimit, upperlimit);
  
        }
    }while(*output>upperlimit || *output<lowerlimit);   //repeats the statement until user inputs the value within the limits
}

void GetQuotient(float dividend, float divisor, float *quotient)    //divides the dividend by the divisor
{
    *quotient = dividend / divisor;
}


