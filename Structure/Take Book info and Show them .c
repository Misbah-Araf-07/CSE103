#include <stdio.h>
#include <string.h>

struct Book
{
    char name[50],Author[50];
    int page ;
    float rating;
};

int main ()
{
    struct Book n1 ;
    printf("Enter Book-Name, Author-name ,Page-amount,User-Rating:\n");
    gets(n1.name);
    gets(n1.Author);
    scanf("%d %f", &n1.page, &n1.rating);

    printf("Book info : \n");
    printf("%s %s %d %.3f \n", n1.name, n1.Author, n1.page, n1.rating);

    printf("\n");

    return 0;







}

