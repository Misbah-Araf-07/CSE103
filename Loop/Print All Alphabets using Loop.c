//Method-1 : Putting Aschii Value 
#include <stdio.h>
int main ()
{
    {
        int a=65;
        printf("Upper Case: ");
        for ( ; a<=90; a++)
            if(a>=90)
                printf(" ");
            else
                printf("%c",a);
    }
    printf(" \n");



    {
        int a=97;
        printf("Lower Case: ");
        for ( ; a<=122 ; a++)
            if (a>122)
                printf(" ");
            else
                printf("%c",a);

    }
    printf(" \n");
    return 0 ;
}

//Method:2 - taking Starting refference from aschii 

#include <stdio.h>
int main ()
{
    {
        printf("Upper Case: ");

        for (int ch=65; ch>='A' && ch<='Z'  ; ch++)
            printf("%c",ch);
    }

    printf("\n");

    {
        printf("Lower Case: ");
        for (int ch=97; ch>= 'a' && ch<= 'z'; ch++)
            printf("%c",ch);
    }

    printf("\n");
    return 0 ;
}







