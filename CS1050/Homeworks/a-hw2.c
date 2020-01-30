#include<stdio.h>
/*Prototypes*/
void PrintAtBats(int atbats[]);
void CalculateBattingAverage(int atbats[], float avg[], int indexToCalculate);
void CalculateSluggingPercentage(int atbats[], float pct[], int indexToCalculate);
void PrintResult(float result[]);
void DoCalculations(int atbats1[], int atbats2[], int atbats3[], float battingavg[], float sluggingpct[]);

int main(void)
{
    float sluggingpct[3];   //Puts the values of DoCalculations - sluggingpct in an array
    float battingavg[3];    //Puts the values of DoCalculations - battingavg in an array
    int player1[] = {0,1,0,1,2,0,0,0,0,-1};
    int player2[] = {3,0,1,0,0,4,0,0,1,0,0,0,0,0,-1};
    int player3[] = {0,0,0,4,2,0,0,0,0,0,1,-1};
    printf("\nPlayer 1 at-bats:\n");    //Prints the bats of each player
    PrintAtBats(player1);
    printf("\nPlayer 2 at-bats:\n");
    PrintAtBats(player2);
    printf("\nPlayer 3 at-bats: \n");
    PrintAtBats(player3);

    DoCalculations(player1, player2, player3, battingavg, sluggingpct); //Sending variables to DoCalculations and fills/implents them
    printf("\n\nBatting Averages:\n");
    PrintResult(battingavg);    //Prints the results of each player for batting avgs
    printf("\nSlugging Percentages:\n");
    PrintResult(sluggingpct);   //Prints the results of each player for slugging pcts
}

void PrintAtBats(int atbats[])
{
    int i;
    for(i = 0; atbats[i] != -1; i++)    //Prints out the hits and stop when it hits -1
    {
        printf("%d ", atbats[i]);
    }
        printf("\n");
}

void CalculateBattingAverage(int atbats[], float avg[], int indexToCalculate)
{
    int total=0;
    int hit=0;
    int i;
    for(i = 0; atbats[i] != -1; i++)    //Calculates the total of hits with total++
    {
        total++;
        if(atbats[i] != 0)  //Allows it to count as a hit if the value is not 0
        {
            hit++;
        }
    }
    avg[indexToCalculate] = (float)hit/total;
}

void CalculateSluggingPercentage(int atbats[], float pct[], int indexToCalculate)
{
    int total = 0;
    int slug = 0;
    int i;
    for(i =0; atbats[i] != -1; i++) //Calculates the total of hits with total++ again
    {
        total++;
        slug = slug + atbats[i];    //Adds the values in the array, which gives the bases
    }
    pct[indexToCalculate] = (float)slug/total;
}

void PrintResult(float result[])
{
    printf("\tPlayer 1: %.3f\n", result[0]);
    printf("\tPlayer 2: %.3f\n", result[1]);
    printf("\tPlayer 3: %.3f\n", result[2]);

}

void DoCalculations(int atbats1[], int atbats2[], int atbats3[], float battingavg[], float sluggingpct[])
{
    CalculateBattingAverage(atbats1, battingavg, 0);    //Sends the variables to CalculateAtBats and fills the array, battingavg in main, 0-2
    CalculateBattingAverage(atbats2, battingavg, 1);
    CalculateBattingAverage(atbats3, battingavg, 2);
    CalculateSluggingPercentage(atbats1, sluggingpct, 0);   //Sends the variables to CalculateSluggingPercentage and fills the array, sluggingpct in main, 0-2
    CalculateSluggingPercentage(atbats2, sluggingpct, 1);
    CalculateSluggingPercentage(atbats3, sluggingpct, 2);
}
