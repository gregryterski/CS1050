#include<stdio.h>

void EnterDistances(int array[], int size);
float AverageDistances(int array[], int size);
void PrintDistances(int array[], int size);
#define ARRAY_SIZE 5

int main(void)
{
    int distances[ARRAY_SIZE];
    printf("Welcome to the distnaces Program!\n\n");

    EnterDistances(distances, ARRAY_SIZE);
    PrintDistances(distances, ARRAY_SIZE); 
 
    printf("Average distance=%.2f\n", AverageDistances(distances, ARRAY_SIZE));

    printf("Thank you for using the Distances program!\n");
}

void EnterDistances(int array[], int size)
{
    int i;
    for(i = 1; i <= size; i++)
    {
    printf("Please enter distance #%d and then hit enter: ", i);
    scanf("%d", &array[i]);
    }
}

float AverageDistances(int array[], int size)
{
    int i;
    int x = 0;
    float avg;
    for(i = 1; i <= size; i++)
    {
        x = x + array[i];
    }
    
    avg = (float)x/size;
    return avg;
}

void PrintDistances(int array[], int size)
{
    int i;
    for(i = 1; i <= size; i++)
    {
        printf("Distance #%d: %d\n", i, array[i]);
    }
}

