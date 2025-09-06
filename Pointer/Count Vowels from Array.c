#include <stdio.h>

int countVowels(char *str)
{
    int count = 0;
    while (*str != '\0') 
    {
        char ch = *str;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
        str++;  // Move to next character
    }
    return count;
}


int main() {
    char text[] = "Programming";
    printf("Number of vowels in '%s': %d\n", text, countVowels(text));
    return 0;
}
