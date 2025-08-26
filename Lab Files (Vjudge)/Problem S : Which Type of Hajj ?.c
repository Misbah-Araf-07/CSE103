//For each input line indicating a pilgrimage type ("Hajj" or "Umrah"), output whether it is "Hajj-e-Akbar" (greater Hajj) or "Hajj-e-Asghar" (minor Hajj).


#include <stdio.h>
#include <string.h>
 
int main() {
    char word[20];
    int caseNo = 1;
 
    while (1) {
        scanf("%s", word);
 
        if (strcmp(word, "*") == 0) {
            break;
        }
 
        if (strcmp(word, "Hajj") == 0) {
            printf("Case %d: Hajj-e-Akbar\n", caseNo);
        }
        else if (strcmp(word, "Umrah") == 0) {
            printf("Case %d: Hajj-e-Asghar\n", caseNo);
        }
 
        caseNo++;
    }
 
    return 0;
}
