//This program finds the Palindrome Number between the Minimum and Maximum values

#include<stdio.h>
int main()
{
  int Number,Reminder,Reverse,Temp;
  int Minimum,Maximum;
  printf("\nPlease Enter the Minimum & Maximum Values\n");
  scanf("%d %d",&Minimum, &Maximum);
  printf("Palindrome numbers Between %d and %d are:\n",Minimum, Maximum);
  for(Number=Minimum;Number<=Maximum;Number++)
   {
     Temp=Number;
     Reverse =0;
     while (Temp > 0)
      {
        Reminder =  Temp %10;
        Reverse = Reverse *10+ Reminder;
        Temp =  Temp /10;
      }
   if(Number==Reverse)
      printf("%d ",Number);
   }
 return 0;
}