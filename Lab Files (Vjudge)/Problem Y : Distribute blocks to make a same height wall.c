//Given stacks of bricks of varying heights, calculate the minimum number of bricks that must be moved to make all stacks equal height.

#include <stdio.h>

int main(void)
{
    int n, set_number = 1;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;

        int heights[50];
        int sum = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &heights[i]);
            sum += heights[i];
        }

        int target = sum / n;
        int min_moves = 0;
        for (i = 0; i < n; i++)
        {
            if (heights[i] > target)
                min_moves += heights[i] - target;
        }

        printf("Set #%d\n", set_number++);
        printf("The minimum number of moves is %d.\n\n", min_moves);
    }
    return 0;
}
