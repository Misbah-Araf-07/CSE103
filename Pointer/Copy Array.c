#include <stdio.h>

void copyString(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  
}

int main() {
    char original[] = "Hello";
    char copy[20];
    
    copyString(copy, original);
    
    printf("Original: %s\n", original);
    printf("Copy: %s\n", copy);
    return 0;
}
