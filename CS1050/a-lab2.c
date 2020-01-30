//Greg Ryterski
//CS1050
#include<stdio.h>

int main(void)
{
        int A, B, C, D; //the 4 integers used
        int e, f, g, h, i, j, k, l; //the dif. values used for calculations

        printf("Enter three integers seperated by spaces:"); //lets the user input the 3 integers
        scanf("%d", &A);
        scanf("%d", &B);
        scanf("%d", &C);
        printf("Enter another integer that is not zero: "); //user has to input another integer != 0
        scanf("%d", &D);

        while (D == 0) //while the 4th integer is 0 this runs
{
        printf("The 4th integer may not be zero. Please enter it again:");
        scanf("%d", &D);
}
        printf("\n*** Initial values ***\n"); //prints the inputed values
        printf("A = %d\n", A);
        printf("B = %d\n", B);
        printf("C = %d\n", C);
        printf("D = %d\n", D);

        printf("\n\n*** Calculated values ***\n");
        e = A + B + C + D;
        printf("A plus B plus C plus D = %d\n", e); //addition of values

        f = D - C - B - A;
        printf("D minus C minus B minus A = %d\n", f); //subtraction of values

        g = D * C * B * A;
        printf("D times C times B times A = %d\n", g); //multiplication of values

        h = (A * C) / D;
        printf("A times C divided by D = %d\n", h); //multiplication, then division

        i = (A * B * C) / D;
        printf("A times B times C divided by D = %d\n", i); //multiplication of the 3 intial values, divided by the 4th

        j = C % D;
        printf("C divided by D remainder = %d\n", j); //remainder

        printf("\n\n*** Initial values ***\n"); //re-prints the inital values
        printf("A = %d\n", A);
        printf("B = %d\n", B);
        printf("C = %d\n", C);
        printf("D = %d\n", D);
{
	int a = abs(A), b = abs(B), c = abs(C), d = abs(D); //initializes the absolute value of all the inputed values
	int max; //max is used to determine greatest value of the 4
	max = (a > b? a : b); //compares the values of a and b
	max = (c > d? (c > max? c : max) : (d > max? d : max)); //compares c and d with the previous max
	printf("\n\nBONUS: The greatest absolute value is %d.\n", max); //greatest abs value
} 
	return 0; //success status
}
