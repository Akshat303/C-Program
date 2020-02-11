/*print square number pattern (for loop) */
#include<stdio.h>
int main()
{
    int i, j, R;
    printf("enter any side of a square :");
    scanf("%d", &R);
    for (i = 0; i < R; i++)
    {
        for (j = 0; j < R; j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}