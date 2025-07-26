//Write a C program to input character from user and check whether character is uppercase or lowercase alphabet using if else
                                                  Method-1 : 
  
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Please Input an Alphabet: ");
    scanf("%c",&ch);
     if (isalpha(ch))
     {
         if (ch>=65 && ch<=90)
            printf("%c is an Upper-case Alphabet\n",ch);
         else if (ch>=97 && ch<=122)
            printf("%c is a Lower-case Alphabet\n",ch);
     }

     else
        printf("Alphabet Input Error\n");

    return 0;
}



                                                  Method-2 : (More Efficent)

#include <stdio.h>


int main()
{
    char ch;
    printf("Please Input an Alphabet: ");
    scanf("%c",&ch);
     if (ch>= 'A' && ch<='Z')
        printf("%c is an Upper-case Alphabet\n",ch);
     else if (ch>='a' && ch<='z')
        printf("%c is a Lower-case Alphabet\n",ch);
     else
        printf("Alphabet Input Error\n");

    return 0;
}



















