#include <stdio.h>

void stringConcat(char *dest, char *src) {
    // Move to end of destination string
    while (*dest != '\0') {
        dest++;
    }
    
    // Copy source to end of destination
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Add null terminator
}

int main() {
    char result[50] = "Hello ";
    char addition[] = "World";
    
    stringConcat(result, addition);
    printf("Result: %s\n", result);
    return 0;
}
