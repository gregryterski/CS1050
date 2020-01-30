// Prelab 9
// By Jim Ries
// November 1, 2019
#include <stdio.h>
#include <stdlib.h>

// Prototype for the function that gets a single
// comma-separated (or newline-separated) field from the file
void GetNextCSVField(FILE * fp, char *output);

int main(void)
{
    char lastname[16];
    char firstname[16];
    char pawprint[16];
    char buffer[16];
    int studentnumber;
    double score;
    FILE * fp;

    // Open the file
    fp=fopen("prelab9.dat","r");
    if (NULL==fp)
    {
        printf("**Error:  Could not open prelab9.dat\n");
    }
    else
    {
        // Keep going until we run out of lines (i.e., we hit the end of the file)
        while (!feof(fp))
        {
            // Get the last name
            GetNextCSVField(fp,lastname);
            // If trying to get the last name pushes us to the end of file, we are done
            if (!feof(fp))
            {
                // Get the first name
                GetNextCSVField(fp,firstname);

                // Get the student number.  In order to use our function, we need to get
                // the student number in a temporary "buffer" and then convert the buffer
                // to the right type (integer in this case).
                GetNextCSVField(fp,buffer);
                studentnumber=atoi(buffer);

                // Get the pawprint
                GetNextCSVField(fp,pawprint);

                // Get the score.  Again, we need to put it in a buffer and convert it
                GetNextCSVField(fp,buffer);
                score=atof(buffer);

                // Just printing out everything we got
                printf("FirstName=%s,LastName=%s,StudentNumber=%d,Pawprint=%s,Score=%lf\n",
                    firstname,lastname,studentnumber,pawprint,score);

                // Leaving it to you for now to add up the scores and divide by the count
                // in order to calculate the average
            }
        }

        fclose(fp);
    }
    
}

void GetNextCSVField(FILE * fp, char *output)
{
    char c=0;

    while (!feof(fp) && c!=',' && c!='\n')
    {
        c=fgetc(fp);
        if (c!=','&&c!='\n')
        {
            *output = c;
            output++;
        }
    }
    *output = '\0';
}