/* C Program to Check Even or Odd Using Conditional Operator */

#include <stdio.h>
int main()
{ 
    int number;
    printf("\n enter the number to check even or odd = ");
    scanf("%d",&number);
    number % 2 == 0 ? //Check whether remainder is 0 or not
    printf(" %d is a even number", number ):
    printf(" %d is a odd number", number);
    return 0;
}