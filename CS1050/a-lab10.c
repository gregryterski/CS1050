#include <stdio.h>
#include <stdlib.h>

int Menu(char * year);

struct _Player
{
    char LastName[16];
    char FirstName[16];
    char Team[16];
    int Year;
    float BattingAvg;
    float OnBasePct;
    float SlugPct;
};

typedef struct _Player Player;

void PrintPlayers(Player players[], int count)
{
    printf("      First Name\tLast Name\t      Team\t Year\t     Batting Avg      OnBase Pct    Slugging Pct\n");
    for (int i=0;i<count;i++)
    {
        printf("%16s %16s %16s\t%5d\t\t%6f\t%6f\t%6f\n",
                players[i].FirstName,
                players[i].LastName,
                players[i].Team,
                players[i].Year,
                players[i].BattingAvg,
                players[i].OnBasePct,
                players[i].SlugPct);
    }
}

void SortBattingAvg(Player players[], int count)
{
    for(int pass=1; pass<count; pass++)
    {
        for(int i=0; i<count; i++)
        {
            Player hold;
            if(players[i].BattingAvg<players[i+1].BattingAvg)
            {
                hold = players[i];
                players[i] = players[i+1];
                players[i+1] = hold;
            }
        }
    }
}

void SortOnBasePct(Player players[], int count)
{
    for(int pass=1; pass<count; pass++)
    {
        for(int i=0; i<count; i++)
        {
            Player hold;
            if(players[i].OnBasePct<players[i+1].OnBasePct)
            {
                hold = players[i];
                players[i] = players[i+1];
                players[i+1] = hold;
            }
        }
    }
}

void SortSlugPct(Player players[], int count)
{
    for(int pass=1; pass<count; pass++)
    {
        for(int i=0; i<count; i++)
        {
            Player hold;
            if(players[i].SlugPct<players[i+1].SlugPct)
            {
                hold = players[i];
                players[i] = players[i+1];
                players[i+1] = hold;
            }
        }
    }
}

void FilterYear(Player players[], int year)
{
    int selection;
    if(year<2017 || year>2019)
    {
        printf("**Error: Invalid filter specified. No filter set.\n");
    }
    else
    {
        char stringyear[] = "(currently 2017)";
        char stringyea[] = "(currently 2018)";
        char stringye[] = "(currently 2019)";
        if(2017 == year)
            selection = Menu(stringyear);
        if(2018 == year)
            selection = Menu(stringyea);
        if(2019 == year)
            selection = Menu(stringye);
        if(selection == 1)
        {
            printf("      First Name\tLast Name\t      Team\t Year\t     Batting Avg      OnBase Pct    Slugging Pct\n");
            for(int i=0; i<15; i++)
            {
                if(players[i].Year == year)
                {
                printf("%16s %16s %16s\t%5d\t\t%6f\t%6f\t%6f\n",
                        players[i].FirstName,
                        players[i].LastName,
                        players[i].Team,
                        players[i].Year,
                        players[i].BattingAvg,
                        players[i].OnBasePct,
                        players[i].SlugPct); 

                }
            }
        }
    }
}

void IntYearPrint(Player players[], int year)
{
    if(year<2017 || year>2019)
    {
        printf("**Error: Invalid filter specified. No filter set.\n");
    }
    else
    {
    printf("*** Initially:\n");
    printf("      First Name\tLast Name\t      Team\t Year\t     Batting Avg      OnBase Pct    Slugging Pct\n");
    for(int i=0; i<15; i++)
    {
        if(players[i].Year == year)
        {
        printf("%16s %16s %16s\t%5d\t\t%6f\t%6f\t%6f\n",
                players[i].FirstName,
                players[i].LastName,
                players[i].Team,
                players[i].Year,
                players[i].BattingAvg,
                players[i].OnBasePct,
                players[i].SlugPct); 
        }
    }
    }
}

int Menu(char * year)
{
    int x;
    do{
    printf("\n*************************\n");
    printf("* Menu                  *\n");
    printf("*************************\n");
    printf("1. Print Player Records\n");
    printf("2. Sort by Batting Average\n");
    printf("3. Sort by On-base Percentage\n");
    printf("4. Sort by Slugging Percentage\n");
    printf("5. Filter by Year %s\n", year);
    printf("6. Exit\n");
    scanf("%d", &x);
    }while(x<1 || x>7);

    return x;
}

int main(int argc, char * argv[])
{   
    FILE * fp = fopen("lab10.dat", "r");
    int count=0;
    int selection, x, year;
    Player players[24];
 
    if(fp)
    {
        while(!feof(fp))
        {
            if(7==fscanf(fp, "%s %s %d %s %f %f %f",
                            players[count].LastName,
                            players[count].FirstName,
                            &(players[count].Year),
                            players[count].Team,
                            &(players[count].BattingAvg),
                            &(players[count].OnBasePct),
                            &(players[count].SlugPct)
                            ))
            {

                count++;
            }
        }
        fclose(fp);
        if(argc>1)
        {
            int intyear = atoi(argv[2]);
            IntYearPrint(players, intyear);
        }
        else
        {
            printf("*** Initially:\n");
            PrintPlayers(players,count);
        }
        do{
            char filler[] = "";
            selection = Menu(filler);

            if(selection == 1)
            {
                PrintPlayers(players,count);
                x=1;
            }
            if(selection == 2)
            {
                SortBattingAvg(players,count);
                x=1;
            }
            if(selection == 3)
            {
                SortOnBasePct(players,count);
                x=1;
            }
            if(selection == 4)
            {
                SortSlugPct(players,count);
                x=1;
            }
            if(selection == 5)
            {
                printf("Enter the filter year: ");
                scanf("%d", &year);
                FilterYear(players,year);
                x=1;
            }
            if(selection == 6)
            { 
                x=0;
            }
        }while(x==1);
    }
}
        
