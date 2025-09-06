#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str + strlen(str) - 1; 
    
    while (start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

int main() {
    char text[] = "Hello";
    printf("Original: %s\n", text);
    reverseString(text);
    printf("Reversed: %s\n", text);
    return 0;
}
