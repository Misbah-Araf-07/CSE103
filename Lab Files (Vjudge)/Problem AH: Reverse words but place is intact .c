//The output will consist of the same lines and words as the input file. However, the letters within each word must be reversed.

#include <stdio.h>

int main() {
    char line[1000];
    int i, start;

    while (fgets(line, 1000, stdin)) {
        start = 0;
        i = 0;
        while (line[i] != '\0') {
            if (line[i] == ' ' || line[i] == '\n' || line[i] == '\t') {
                int end = i - 1;
                while (start < end) {
                    char t_char = line[start];
                    line[start] = line[end];
                    line[end] = t_char;
                    start++;
                    end--;
                }
                start = i + 1;
            }
            i++;
        }

        if (start < i) {
            int end = i - 1;
            while (start < end) {
                char t_char = line[start];
                line[start] = line[end];
                line[end] = t_char;
                start++;
                end--;
            }
        }
        printf("%s", line);
    }

    return 0;
}
