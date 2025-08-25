//Relation between 2 digits , >/</= ? 

#include <stdio.h>
 
int main() {
    int t,i;
    int a[20], b[20];   
    char result[20];   
 
 
    scanf("%d", &t);
 
 
    for ( i = 0; i < t; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
 
 
    for ( i = 0; i < t; i++) {
        if (a[i] > b[i])
            result[i] = '>';
        else if (a[i] < b[i])
            result[i] = '<';
        else
            result[i] = '=';
    }
 
 
    for ( i = 0; i < t; i++) {
        printf("%c\n", result[i]);
    }
 
    return 0;
}
