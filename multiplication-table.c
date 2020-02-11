/* C Program to Print Multiplication Table up to 10 */

#include <stdio.h>
int main()
{
 int N, i ;
 printf("\n Enter any integer up to 10 are : ");
 scanf("%d", &N);
 for (i = 1; i <= 10; ++i)
  {
      printf("%d * %d = %d\n", N, i, N * i);    
  }
 return 0;
}