//Write a recursive function to count the digits of an integer.

#include <stdio.h>
int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}
int main() {
    int num = 12345;
    printf("Number of digits in %d is %d\n", num, countDigits(num));
    return 0;
}


// Logic : 

countDigits(12345)
= 1 + countDigits(1234)      // Count digit 5
= 1 + (1 + countDigits(123))  // Count digit 4
= 1 + (1 + (1 + countDigits(12))) // Count digit 3
= 1 + (1 + (1 + (1 + countDigits(1)))) // Count digit 2
= 1 + (1 + (1 + (1 + (1 + countDigits(0))))) // Count digit 1
= 1 + (1 + (1 + (1 + (1 + 0)))) // Base case returns 0
= 1 + (1 + (1 + (1 + 1)))
= 1 + (1 + (1 + 2))
= 1 + (1 + 3)
= 1 + 4
= 5
 The magic of Recursive Function is that when it calls it self , it adds one to the counter



  
