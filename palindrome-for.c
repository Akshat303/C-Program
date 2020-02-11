/* Program for Palindrome in C using For Loop */
#include <stdio.h>

int main()
{
  int Number, Temp, Reminder, Reverse = 0;
 
  printf("\nPlease Enter any number to Check for Palindrome\n");
  scanf("%d", &Number);
   
  for(Temp = Number; Temp > 0; Temp =  Temp /10 )
  {
     Reminder = Temp %10;
     Reverse = Reverse *10+ Reminder;
  }
 
  printf("Reverse of entered number is = %d\n", Reverse);

  if ( Number == Reverse )
     printf("\n%d is Palindrome Number.\n", Number);

  else
     printf("%d is not the Palindrome Number.\n", Number);
 
  return 0;
}