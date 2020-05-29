/* C Program to find Sum of Even and Odd Numbers in a given range */
 
#include<stdio.h>
 int main()
{
  int i, Minimum, Maximum, Even_Sum = 0, Odd_Sum = 0;
  printf("\n Please Enter the Minimum Limit Values : ");
  scanf("%d", &Minimum);
  printf("\n Please Enter the Maximum Limit Values : ");
  scanf("%d",&Maximum);

   for(i = Minimum; i <= Maximum; i++)
  {
    if ( i%2 == 0 ) 
    {
       Even_Sum = Even_Sum + i;
    }
    else
    {
  	Odd_Sum = Odd_Sum + i;
    } 
  }
  printf("\n The Sum of Even Numbers betwen %d and %d  = %d", Minimum, Maximum, Even_Sum);
  printf("\n The Sum of Odd Numbers betwen %d and %d  = %d", Minimum, Maximum, Odd_Sum);
  return 0;
}
