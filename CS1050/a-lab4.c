#include<stdio.h>
#include<math.h>

double MyPower(double b, int e);
void TestIsEqual(double result, double expected);
void DoTest(double b, int e);

int main(void)
{
    DoTest(-20,11);
    DoTest(2.0d,3);
    DoTest(2.0d,-1);
    DoTest(5.0d,-2);
    DoTest(4,0);
    DoTest(-1,3);
    DoTest(-2,-2);
    DoTest(-20,-1);
    DoTest(-20,-11);
    DoTest(4.5,3);
    DoTest(4.5,-3);
    DoTest(-1, 11);
    DoTest(1,-11);
}

double MyPower(double b, int e)
{
    int p;
    double result=1;
    if(e < 10 && e > -10)
    {
        if(e < 0)
        {
            for(p = 0; p < -e; p++){
            result = result * -b;
            }
            result = 1/result;
        }
         if(e > 0)
        {
            for(p = 0; p < e; p++)
            {
            result = result * b;
            }
        }
    }
    else
    {
        result = 0;
    }
    return result;
}

void DoTest(double b, int e)
{
    double expected = pow(b, e);
    double result = MyPower(b, e);
    printf("Testing %.6lf to the %d\n", b, e);
    TestIsEqual(result, expected);
}

void TestIsEqual(double result, double expected)
{
    if(result == expected)
    {
        printf("Success: %.6lf==%.6lf\n", expected, result);
    }
    else
    {
        printf("Error: expected %.6lf, result was %.6lf\n", expected, result);
    }
}
