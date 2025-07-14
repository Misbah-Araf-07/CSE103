#include <stdio.h>

void saysHi();

int main()
{
    saysHi();
    return 0;

}

void saysHi()


{   char X [30];
    printf("Please Enter Your Name:  ");
    scanf("%s", &X);
    printf("Hi there %s\n",X);
}
