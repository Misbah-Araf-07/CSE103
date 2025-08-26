//Take input (info of studnts) from file and show 



#include <stdio.h>
struct student {
    char name [50];
    int id;
    float cgpa;



};



int main ()
{

    FILE *myFile1;
    myFile1 = fopen ("input.txt", "r");
    if (myFile1==NULL)
    {
     printf("File Does not Exist\n");
     return 1;
    }

    struct student stdList[100];
    int n, i ;
    fscanf(myFile1, "%d", &n);

    for (i=0;i<n;i++)
    {
        fgetc(myFile1);
        fgets(stdList[i].name, sizeof stdList[i].name, myFile1);
        fscanf(myFile1, "%d %f", &stdList[i].id ,&stdList[i].cgpa);

    }

    for (i=n-1; i>=0; i--)
    {
        printf("Students %d\n\n",i+1);
        printf("Name:%s",stdList[i].name);
        printf("Id:%d\n",stdList[i].id);
        printf("CGPA:%.2lf\n",stdList[i].cgpa);

    }

    fclose(myFile1);
    return 0;



}

