//Write a C program input two numbers from user and find the HCF using for loop.

#include <stdio.h>
void findDigit(int x, int y)
{
    int q = x % y;

    while (q != 0) {
        x = y;
        y = q;
        q = x % y;
    }

    printf("HCF = %d\n\n", y);
}


int main ()
{
    int n1, n2, i, cases;
    cases=0;
    printf("How Many Operations you want: ");
    scanf("%d",&cases);
    printf("\n");

    for (i=0; i<cases; i++)
    {
    printf("Please Enter larger Numbers: ");
    scanf("%d",&n1);
    printf("\n");
    printf("Please Enter smaller Numbers: ");
    scanf("%d",&n2);
        if (n1<0) n1*=-1;
        if (n2<0) n2*=-1;
    findDigit(n1,n2);
    }

    return 0;
}





//#include <stdio.h>
//
//int main()
//{
//    int i, num1, num2, min;
//    int hcf=1; //smallest integer is 1 
//
//    printf("Enter any two numbers to find HCF: ");
//    scanf("%d %d", &num1, &num2);
//
//    //smallest number > the minimum factor 
//    min = (num1<num2) ? num1 : num2;
//
//    for(i=1; i<=min; i++)
//    {
//        if(num1%i==0 && num2%i==0)
//        {
//            hcf = i;
//        }
//    }
//
//    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
//
//    return 0;
//}







