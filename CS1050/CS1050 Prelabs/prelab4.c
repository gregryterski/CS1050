#include<stdio.h>
#include<math.h>

double MyPower(double i, int j);
void DoTest(double i, int j);

int main(void)
{
    int i, j;

    for(i = 1; i < 5; i++)
    {
        for(j = 1; j < 5; j++)
        {
            DoTest(i, j);
        }
    }
}

double MyPower(double i, int j)
{
    int p;
    float x=1;
    if(j > 0)
    {
        for(p = 0; p < j; p++)
        {
        x = x * i;
        }
    }
    return x;
}

void DoTest(double i, int j)
{
    float power;
    power = pow(i, j);
    float MyPow = MyPower(i, j);
    float percision = 0.001;
   
    if(MyPow > power - percision && MyPow < power + percision)
        {
            printf("Testing %.6f to the %d power\n", i, j);
        }
    else{
        printf("***Error: expected %.6lf, result was %.6lf\n", power , MyPow);
        }
}
