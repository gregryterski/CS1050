#include<stdio.h>
#include<math.h>
#define LIMIT 7 //defines the variable LIMIT to be 7
//Prototypes
void InitArrayCubed(int array[], int size);
void InitArrayDoubled(int array[], int size);
void PrintArray(int array[], int size);
void SumArrays(int arrayln1[], int arrayln2[], int arrayOut[], int size);
void MultArrays(int array1[], int array2[], int arrayOut[], int size);

int main(void)
{
    int ArrayOne[] = {0,1,2,3,4,5,6};   //values in the array 1 & 2
    int ArrayTwo[] = {0,1,2,3,4,5,6};
    int sumarray[LIMIT];    //stores the values of the sum function
    int multarray[LIMIT];   //stores the values of the multiplication function
    
    InitArrayCubed(ArrayOne, LIMIT);    //sends the program to cube array 1
    InitArrayDoubled(ArrayTwo, LIMIT);  //send the program to double array 2
    SumArrays(ArrayOne, ArrayTwo, sumarray, LIMIT); //adds the new values of the arrays together
    MultArrays(ArrayOne, ArrayTwo, multarray, LIMIT);   //multiplies the values in the array

    printf("Sum of array1 and array2: \n"); //sends the sumarray values stored to print
    PrintArray(sumarray, LIMIT);
    printf("Product of array1 and array 2:  \n");   //sends the multarray values stored to print
    PrintArray(multarray, LIMIT);
}

void InitArrayCubed(int array[], int size)
{
    printf("Array 1: \n");
    int i;
    for(i = 0; i < size; i++)   //cubes the values in ArrayOne
    {
        array[i] = pow(array[i], 3);
    }
    PrintArray(array, size);    //sends the values in the array to be printed
}

void InitArrayDoubled(int array[], int size)
{
    printf("Array 2: \n");
    int i;
    for(i = 0; i < size; i++) //doubles the values in ArrayTwo
    {
        array[i] = array[i] * 2;
    }
    PrintArray(array, size);    //sends the values in the array to be printed
}

void PrintArray(int array[], int size)
{
    int i;
    for(i = 0; i < size; i++)   //prints values inside of an array while it is in the size, LIMIT.
    {
        printf("\t%d\n", array[i]);
    }
}
void SumArrays(int arrayln1[], int arrayln2[], int arrayOut[], int size)
{
    int i;
    for(i = 0; i < size; i++)   //stores the added values in ArrayOut which is set to sumarrays in main
    {
        arrayOut[i] = arrayln1[i] + arrayln2[i];
    }
}

void MultArrays(int array1[], int array2[], int arrayOut[], int size)
{
    int i;
    for(i = 0; i < size; i++)   //stores the multiplied values in ArrayOut which is set to multarrays in main
    {
        arrayOut[i] = array1[i] * array2[i];
    }
}
