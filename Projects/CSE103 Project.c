#include <stdio.h>
#include <string.h>

typedef struct {
    char code[8];
    double grade;
} course;

typedef struct {
    int id;
    char name[32];
    course grades[3];
    double cgpa;
} std;

int main() {
    FILE *F1 = fopen("student_input .txt", "r");
    FILE *F2 = fopen("output.txt", "w");
    if (F1 == NULL) {
        printf("File not found\n");
        return 1;
    }

    int n;
    fscanf(F1, "%d", &n);
    std info[10];

    for (int i = 0; i < n; i++) {
        fscanf(F1, "%d", &info[i].id);
        fgetc(F1);
        fgets(info[i].name, sizeof(info[i].name), F1);


        for (int j = 0; info[i].name[j]; j++)
        {
            if (info[i].name[j] == '\n')
                info[i].name[j] = 0;
        }


        fscanf(F1, "%lf", &info[i].grades[0].grade);
        fscanf(F1, "%lf", &info[i].grades[1].grade);
        fscanf(F1, "%lf", &info[i].grades[2].grade);

        double totalCredits = 4.5 + 3.0 + 3.0;
        double GradeSum = info[i].grades[0].grade * 4.5 +info[i].grades[1].grade * 3.0 + info[i].grades[2].grade * 3.0;
        info[i].cgpa = GradeSum / totalCredits;
    }


    fprintf(F2, "-------------------------------------------------------\n");
    fprintf(F2, "%-6s %-14s %-8s %-8s %-8s %-8s\n", "ID", "Name", "CSE103", "MAT101", "ENG101", "CGPA");
    fprintf(F2, "-------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        fprintf(F2, "%-6d %-14s %-8.2lf %-8.2lf %-8.2lf %-8.2lf\n", info[i].id, info[i].name, info[i].grades[0].grade,info[i].grades[1].grade, info[i].grades[2].grade,info[i].cgpa);
    }
    fprintf(F2, "-------------------------------------------------------\n");

    fclose(F1);
    fclose(F2);
    return 0;
}
