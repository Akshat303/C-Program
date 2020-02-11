/* Program for Palindrome in C using Functions */

#include <stdio.h>
int Reverse_Integer (int Number);
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
  int Reminder, Reverse = 0;
  for(; Number > 0; Number =  Number /10 )
   {
     Reminder = Number %10;
     Reverse = Reverse * 10 + Reminder;
   }
  return Reverse;
}