#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* stream = fopen("tester.dat", "r");  //file reader

    char line[1024];                        // initialise variables
    double score=0.0;
    int studCount=0;

    while (fgets(line, 1024, stream))           //while condition till the data is in stream, that is till the data is being read from file
    {
        char* tmp = strdup(line);

        char* token = strtok(tmp, ",");    //devides char* in tokens sperated by ,
        const char *lstname = token;

        token = strtok(NULL, ",");
        const char *fstname = token;

        token = strtok(NULL, ",");
        const char *studnum = token;

        token = strtok(NULL, ",");
        const char *print = token;

        token = strtok(NULL, ",");
        const char *marks = token;

        printf("Firstname : %s, Lastname : %s, Studentnumber: %s, Pawprint : %s, Score : %s\n", fstname, lstname, studnum, print, marks);

        char *ptr;                      // pointer variable
        double scr=strtod(marks,&ptr);     //string to double
        score+=scr;
        studCount++;
        free(tmp);
    }

    double avg=score/studCount;
    printf("Count of students = %d\n", studCount);
    printf("Average Score = %0.6lf\n", avg);
}
