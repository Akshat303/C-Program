/* C Program to find Largest of Three numbers using Conditional Operator */

#include<stdio.h>

int main()
{
    int a, b, c, largest;

    printf("Please Enter three different values\n");
    scanf(" %d %d %d", &a, &b, &c);

    largest =((a>b && a>c)?a: (b>c)?b:c);

    printf("\nLargest number among three is: %d", largest);
    return 0;
}