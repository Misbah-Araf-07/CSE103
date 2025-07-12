#include <stdio.h>
#include <ctype.h>


int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-6.2:Write a C program that takes an character as input and checks if its vowel or consonant or other symbols.\n\nSolution:\n");


    char X;
    printf("Please Give an Alphabet: ");
    scanf(" %c",&X);


    if (isalpha(X))
    {

        if  (X=='a' ||X=='A' ||X=='e' ||X=='E' ||X=='I' ||X=='i' ||X=='O' ||X=='o' ||X=='U' ||X=='u')
            printf("%c is vowel\n",X);

        else
            printf("%c is Consonant\n",X);
    }






    else if (isdigit(X))
            printf("%c is a number\n",X);

    else
        printf("%c is a special symbol\n",X);





    return 0;
}


