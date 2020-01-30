#include <stdio.h>

struct _Player
{
    char LastName[16];
    char FirstName[16];
    char Team[16];
    int Year;
    float BA;
    float OBP;
    float SLUG;
};

typedef struct _Player Player;

void PrintPlayers(Player players[], int count)
{
    for (int i=0;i<count;i++)
    {
        printf("%16s %16s %16s %5d %6f %6f %6f\n",
                players[i].FirstName,
                players[i].LastName,
                players[i].Team,
                players[i].Year,
                players[i].BA,
                players[i].OBP,
                players[i].SLUG);
    }
}

void SortPlayers(Player players[], int count)
{
    for (int pass=1;pass<count;pass++)
    {
        for (int j=0;j<count-1;j++)
        {
            Player temp;
            if (players[j].OBP<players[j+1].OBP)
            {
                temp = players[j];
                players[j] = players[j+1];
                players[j+1]=temp;
            }
        }
    }
}

int main(void)
{
    FILE * fp;
    Player players[24];
    int count=0;

    fp = fopen("prelab10.dat","r");
    if (fp)
    {
        // Read all of the records in to the array
        while (!feof(fp))
        {
            if (7==fscanf(fp,"%s %s %d %s %f %f %f",
                        players[count].LastName,
                        players[count].FirstName,
                        &(players[count].Year),
                        players[count].Team,
                        &(players[count].BA),
                        &(players[count].OBP),
                        &(players[count].SLUG)
                        ))
            {
                count++;
            }
        }
        fclose(fp);

        printf("*** Initially:\n");
        PrintPlayers(players,count);

        printf("*** Sorted by On-base Pct:\n");
        SortPlayers(players,count);
        PrintPlayers(players,count);
    }
}
