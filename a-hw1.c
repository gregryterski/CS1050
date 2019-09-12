//Greg Ryterski
//CS1050
#include<stdio.h>

int main(void)
{
	int a;
	int x;
	
	printf("**** Digital Music Info ****\n");

	do //allows the user to loop or exit the function after the user has seen a rating of the album(s)
{
	do //loops the artists if the user doesn't type a num within the bounds
{
	printf("\n\nSelect an artist:\n");	//user selects the artist from the list
	printf("1. Bruce Springsteen\n");
	printf("2. Steve Earle\n");
	printf("3. The Clash\n");
	printf("4. The Sex Pistols\n");
	printf("5. P.J. Harvey\n");
	scanf("%d", &a);

	if(a > 5 || a < 1)	//runs if user inputs a value that isn't in bounds
{
	printf("\n** Please Enter a selection from 1 to 5 **\n"); //prints that they must enter a value from 1-5
}
}
 	while(a > 5 ||  a < 1);

	if(a == 1) //runs if user selected "1. Bruce Springsteen"
{
	int b;
	do //loops the albums if the user doesn't type a num within the bounds
{
    printf("\nSelect an album:\n"); //user selects an album or all albums from the list
	printf("1. Greetings from Asbury Park\n");
	printf("2. The Wild, The Innocent, and The E-Street Shuffle\n");
	printf("3. Born to Run\n");
	printf("4. Darkness On The Edge of Town\n");
	printf("5. The River\n");
	printf("6. Nebraska\n");
    printf("7. All Albums by this Artist\n");
	scanf("%d", &b);

    if(b > 7 || b < 1) //corrects the user if num is out of bounds
{
    printf("\n** Please enter a selection from 1 to 7 **\n"); //prints that they must enter a value from 1-5
}
}
	while(b > 7 || b < 1);

	if(b == 1) //rating if user selected "1. Greetings from Asbury Park"
{
	printf("\n\n*** Stars = 3.0 ***\n"); //prints the stars given for the album
}
	if(b == 2)
{
	printf("\n\n*** Stars = 3.5 ***\n");
}
	if(b == 3)
{
	printf("\n\n*** Stars = 4.5 ***\n");
}
	if(b == 4)
{
	printf("\n\n*** Stars = 5.0 ***\n");
}
	if(b == 5)
{
	printf("\n\n*** Stars = 4.5 ***\n");
}
	if(b == 6)
{
	printf("\n\n*** Stars = 5.0 ***\n");
}
    if(b == 7)
{
    printf("\n\n*** Stars = 4.3 ***\n");
}
}
	if(a == 2)
{
	int c;
	do
{
    printf("\nSelect an album:\n");
	printf("1. Copperhead Road\n");
	printf("2. I Feel Alright\n");
	printf("3. El Corazon\n");
	printf("4. Transcendental Blues\n");
    printf("5. All Albums by this Artist\n");
	scanf("%d", &c);

     if(c > 5 || c < 1)
{
     printf("\n** Please enter a selection from 1 to 5 **\n");
}	
}
	while(c > 5 || c < 1);

	if(c == 1)
{
	printf("\n\n*** Stars = 4.0 ***\n");
}
	if(c == 2)
{
	printf("\n\n*** Stars = 5.0 ***\n");
}
	if(c == 3)
{
	printf("\n\n*** Stars = 4.5 ***\n");
}
	if(c == 4)
{
	printf("\n\n*** Stars = 4.0 ***\n");
}
    if(c == 5)
{
    printf("\n\n*** Stars = 4.4 ***\n");
}
}
	if(a == 3)
{
	int d;
	do
{
    printf("\nSelect an album:\n");
	printf("1. The Clash\n");
	printf("2. London Calling\n");
	printf("3. Sandinista\n");
	printf("4. Combat Rock\n");
    printf("5. All Albums by this Artist\n");
	scanf("%d", &d);

	if(d > 5 || d < 1)
{
	printf("\n** Please enter a selection from 1 to 5 **\n");
}
}
	while(d > 5 || d < 1);

	if(d == 1)
{
	printf("\n\n*** Stars = 5.0 ***\n");
}
	if(d == 2)
{
	printf("\n\n*** Stars = 5.0 ***\n");
}
	if(d == 3)
{
	printf("\n\n*** Stars = 4.0 ***\n");
}
	if(d == 4)
{
	printf("\n\n*** Stars = 3.5 ***\n");
}
    if(d == 5)
{
    printf("\n\n*** Stars = 4.4 ***\n");
}
}
	if(a == 4)
{
	int e;
	do
{
	printf("\nSelect an album:\n");
	printf("1. Never Mind The Bollocks, Here's The Sex Pistols\n");
    printf("2. All Albums by this Artist\n");
	scanf("%d", &e);

    if(e > 2 || e < 1)
{
    printf("\n** Please enter a selection from 1 to 2 **\n");
}
}
	while(e > 2 || e < 1);

	if(e == 1)
{
	printf("\n\n*** Stars = 5.0 ***\n");
}
    if(e == 2)
{
    printf("\n\n*** Stars = 5.0 ***\n");
}
}
	if(a == 5)
{
	int f;
	do
{
    printf("\nSelect an album:\n");
	printf("1. Dry\n");
	printf("2. Rid of Me\n");
	printf("3. Stories From the City, Stories From the Sea\n");
    printf("4. All Albums by this Artist\n");
	scanf("%d", &f);

    if(f > 4 || f < 1)
{
    printf("\n** Please enter a selection from 1 to 4 **\n");
}
}
	while(f > 4 || f < 1);

	if(f == 1) 
{
	printf("\n\n*** Stars = 3.0 ***\n");
}
	if(f == 2)
{
	printf("\n\n*** Stars = 3.0 ***\n");
}
	if(f == 3)
{
	printf("\n\n*** Stars = 5.0 ***\n");
}
    if(f == 4)
{
    printf("\n\n*** Stars = 3.7 ***\n");
}
}
	printf("\n\nEnter 0 to exit or any other number to continue...\n"); //prints when the user is shown rating for album(s) selected
	scanf("%d", &x); //allows user to decide if they want to see more ratings or exit the program
}
	while(x != 0);
}
