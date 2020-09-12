/*C Program to Print Any Multiplication Table */

#include <stdio.h>
int main()
{
  int num, i = 1; //(while loop)
  //int num, i ; //(for loop)
  printf("Enter any Number: ");
  scanf("%d", &num);
  printf("Multiplication table of %d:\n", num);
  while (i <= 10) //(while loop)
                  // for (i = 1; i <= 10; ++i) //(for loop)
  {
    printf("%d x %d = %d\n", num, i, num * i);
    i++; //(while loop)
  }
  return 0;
}