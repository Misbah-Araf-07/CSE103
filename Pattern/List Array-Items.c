#include <stdio.h>

int main() {
    // Array of string pointers
    char *fruits[] = {"Apple", "Banana", "Cherry", "Date"};
    int count = 4;
    
    printf("Fruits list:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i+1, *(fruits + i));  // Using pointer arithmetic
    }
    
    // Alternative access
    printf("\nAlternative access:\n");
    char **ptr = fruits;  // Pointer to pointer
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i+1, *ptr);
        ptr++;
    }
    
    return 0;
}
