/* Program for Palindrome in C using Recursion */

#include <stdio.h>
int Reverse_Integer (int);
int main()
{
  int Number, Reverse = 0;
   printf("\nPlease Enter any number to Check for Palindrome\n");
  scanf("%d", & Number);
   Reverse = Reverse_Integer (Number);
  printf("Reverse of entered number is = %d\n", Reverse);
  if ( Number == Reverse )
     printf("\n%d is Palindrome Number.\n", Number);
  else
     printf("%d is not the Palindrome Number.\n", Number);
   return 0;
}
int Reverse_Integer (int Number)
{
  static Reminder, Reverse = 0;
   if (Number > 0)
   {
     Reminder = Number %10;
     Reverse = Reverse *10+ Reminder;
     Reverse_Integer (Number /10);
     return Reverse;
   }
  else
     return 0;
}