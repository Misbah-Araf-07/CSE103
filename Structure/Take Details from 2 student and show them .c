#include <stdio.h>
#include <string.h>

struct student
{
    char name[100],id[20], contact [20];
    int age ;
    float cgpa;
};

int main ()
{
    struct student std1,std2 ;
    printf("Enter Name Id Age CG Contact (For Student 1):\n");
    gets(std1.name);
    gets(std1.id);
    scanf("%d %f", &std1.age, &std1.cgpa);
    getchar();
    gets(std1.contact);

    printf("Student 1 info : \n");
    printf("%s %s %d %f %s \n", std1.name, std1.id, std1.age, std1.cgpa,std1.contact);

    printf("\n");

    printf("Enter Name Id Age CG Contact (For Student 2):\n");
    gets(std2.name);
    gets(std2.id);
    scanf("%d %f", &std2.age, &std2.cgpa);
    getchar();
    gets(std2.contact);

    printf("Student 2 info : \n");
    printf("%s %s %d %f %s \n", std2.name, std2.id, std2.age, std2.cgpa,std2.contact);

    return 0;







}

