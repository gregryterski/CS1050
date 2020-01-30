#include<stdio.h>
#include<stdlib.h>

void GetFixedField(char * in, int size, FILE * fp);

int main(void)
{
    FILE* fp = fopen("lab9.txt", "r");
    
    int i=0;
    int j=0;
    char key[12];
    char version[8];
    char fstname[11];
    char lstname[11];
    char answers[41];
    char answers1[41];
    char answers2[41];
    int versionnum;
    int correct=0;
    double score = 0.0;
    int k, z, p;

    if(NULL == fp)
    {
        printf("***Error: Could not open lab9.txt***\n");
    }
    else
    {
        printf("\n\n");
        while(!feof(fp))
        {
            GetFixedField(key, 12, fp);
            GetFixedField(version, 8, fp);
            GetFixedField(lstname, 11, fp);
            GetFixedField(fstname, 11, fp);
            GetFixedField(answers, 41,fp);
            versionnum = atoi(version);
            if(j==0)
            {
                for(k=0; k<41; k++)
                {
                    answers1[k] = answers[k];
                }
                printf("***New key=%s %s %d\n  %s\n", fstname, lstname, versionnum, answers);
            }
            
            if(i==1 || i==2 || i==3 || i==5 || i==6 || i==7 || i==8)
            {
                for(z=0; z<41; z++)
                {
                answers2[z] = answers[z];
                    if(answers2[z] == answers1[z])
                    {
                        correct++;
                    }
                }

                printf("%s%s:\n %s\n", fstname, lstname, answers);

                score = (correct/40) * 100;
                printf("  Score=%.6f\n", score);
            }
            
            if(j==4)
            {
                for(p=0; p<41; p++)
                {
                answers1[p] = answers[p];
                }
                printf("\n\n");
                printf("***New key=%s %s %d\n  %s\n", fstname, lstname, versionnum, answers);
            }

            fgets(key, 12, fp);
            i++;
            j++;
        }

        fclose(fp);
    }
}

void GetFixedField(char * in, int size, FILE * fp)
{
    int i;
    char c = 0;
    for(i=0; i<size; i++)
    {
        c= fgetc(fp);
    
        in[i] = c;
    }
    in[i] = '\0';
}
