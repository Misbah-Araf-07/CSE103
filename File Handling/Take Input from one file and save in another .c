//Take Info as input from file and save the output in anotherfile 

#include <stdio.h>
struct student {
    char name [50];
    int id;
    float cgpa;



};



int main ()
{

    FILE *myFile1,*myFile2;
    myFile1 = fopen ("input.txt", "r");
    myFile2 = fopen ("output.txt", "w");

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
        fprintf(myFile2,"Students %d\n\n",i+1);
        fprintf(myFile2,"Name:%s",stdList[i].name);
        fprintf(myFile2,"Id:%d\n",stdList[i].id);
        fprintf(myFile2,"CGPA:%.2lf\n",stdList[i].cgpa);

    }

    fclose(myFile1);
    fclose(myFile2);
    return 0;



}
