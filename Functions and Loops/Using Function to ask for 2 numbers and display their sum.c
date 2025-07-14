#include <stdio.h>





//Method-1 : Without using Void , here return a+b sets what shows up at the end. Return 0 ignores Summed values and not writing the line , shows last feeded value, meaning int b.  
/*
int getSum();


int main ()
{
    int X= getSum();
    printf("Sum is %d\n\n",X);
    return 0 ;
}



int getSum()
{
    int a,b;
    printf("Throw two numbers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}

/*



  
////Method-2 : Using Void. Here without putting any return (condition) , the output is shows as expected. 
/*
void getSum();

int main ()
{
    getSum();
    return 0;

}


void getSum()
{
    int a,b;
    printf("Please Input two numbers : ");
    scanf("%d %d",&a,&b);
    printf("SUM= %d\n",a+b);


}

/*














