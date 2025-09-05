//

#include <stdio.h>
void reverseString(char *str) {
    if (*str) {
        reverseString(str + 1);
        putchar(*str);
    }
}
int main() {
    char str[] = "hello";
    printf("Reverse of %s is ", str);
    reverseString(str);
    printf("\n");
    return 0;
}
