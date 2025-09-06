//Write a function that finds the sum of all elements in an array using pointer arithmetic

//method-1

#include <stdio.h>

int SumArr(int *arr, int size)
{
    int sum=0;

    for (int i=0;i<size;i++)
    {
        sum += arr[i];
    }
    return sum;
}



int main ()
{   int arr[4]= {5,10,15,100};
    int sum = SumArr(arr,4);
    printf("Sum=%d\n",sum);

 
    return 0;
}



//method-2


#include <stdio.h>

int SumArr(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // Using pointer arithmetic instead of arr[i]
    }
    return sum;
}

int main() {
    int arr[4] = {5, 10, 15, 100};
    int sum = SumArr(arr, 4);
    printf("Sum = %d\n", sum);
    return 0;
}







