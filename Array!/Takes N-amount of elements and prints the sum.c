//Write a C program to read elements in an array and find the sum of array elements. C program to find sum of elements of the array.
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }


    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }



    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of array elements is: %d\n", sum);

    return 0;
}
