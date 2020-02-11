/* C Program to Print Odd Numbers with in a given Range */
 
#include<stdio.h>
int main()
{
  	int i, Minimum, Maximum; 
  	printf("\n Enter the Minimum Limit Value :  ");
  	scanf("%d", &Minimum);
  	printf("\n Enter the Maximum Limit Values :  ");
  	scanf("%d", &Maximum);    
  	if ( Minimum % 2 == 0 ) 
    {
    	Minimum++;
    }  
  	printf("\n Odd Numbers between %d and %d are : \n", Minimum, Maximum);
  	for(i = Minimum; i <= Maximum; i= i+2)
  	{
    	printf(" %d\t", i);
  	} 
  	return 0;
}