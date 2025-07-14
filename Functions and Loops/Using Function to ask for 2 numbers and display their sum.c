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

////Method-2.5 : Using Void. here , it is just to show that the void function part can be written at the beginning too . It Shows that main work or process starts from int main and whatever is in it , and something outside the int main body works only when something calls from within the int main body . 

/*

void getSum()
{
    int a,b;
    printf("Please Input two numbers : ");
    scanf("%d %d",&a,&b);
    printf("SUM= %d\n",a+b);


}


int main ()
{
    getSum();
    return 0;

}





*/











