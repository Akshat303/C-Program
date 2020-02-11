/*print square number pattern (while loop) */
#include<stdio.h>
int main()
{
    int i, j, R;
    i=0;
    printf("enter any side of a square :");
    scanf("%d", &R);
    while (i < R)
    {
        j = 0 ;
        while (j<R)
        {
            printf("1");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}