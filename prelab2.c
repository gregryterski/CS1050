//Greg Ryterski
//CS1050
#include<stdio.h>

int main(void)
{
	int x, y, product, divide, c; //includes the variables and functions
	printf("Enter two integers seperated by spaces:"); //tells the user to input two variables
	scanf("%d%d", &x, &y);

	product = x*y;
	printf("X times Y = %d\n", product); //takes the product of the two

	divide = x/y;
	printf("X divided by Y = %d\n", divide); //divides the two

	c = (x+1)*y;
	printf("X plus 1, quantity times Y = %d\n", c); //adds the 1st variable and divides by second

	printf("X = %d\n", x); //returns the variable values
	
	printf("Y = %d\n", y);

	return 0; //sucess status
}
