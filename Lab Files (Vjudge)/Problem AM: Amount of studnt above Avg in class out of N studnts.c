//

#include <stdio.h>

int main() {
    int C, N, grade;
    int i, caseNum;

    scanf("%d", &C);
    for(caseNum = 0; caseNum < C; caseNum++) {
        scanf("%d", &N);
        int grades[1000]; 
        int sum = 0;
        
        for(i = 0; i < N; i++) {
            scanf("%d", &grades[i]);
            sum += grades[i];
        }
        
        double avg = (double)sum / N;
        int count = 0;
        for(i = 0; i < N; i++) {
            if(grades[i] > avg) count++;
        }
        double percent = ((double)count / N) * 100;
        printf("%.3lf%%\n", percent);
    }
    return 0;
}
