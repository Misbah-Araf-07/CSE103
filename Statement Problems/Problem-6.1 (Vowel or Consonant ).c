#include <stdio.h>
#include <ctype.h>


int main()
{
    printf("\t\t\t\t\"Misbah Ahmed Araf's Statement problems\"\n\n\n");
    printf("Problem-6.1:Write a C program that takes an character as input and checks if its vowel or consonant.\n\nSolution:\n");


    char X;
    printf("Please Give an Alphabet: ");
    scanf(" %c",&X);


    if  (X=='a' ||X=='A' ||X=='e' ||X=='E' ||X=='I' ||X=='i' ||X=='O' ||X=='o' ||X=='U' ||X=='u')
        printf("%c is vowel\n",X);

    else
        printf("%c is Consonant\n",X);
}








return 0;
}


