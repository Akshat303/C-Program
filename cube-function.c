/* C Program to find Cube of a Number using Function */
 
#include<stdio.h>
int Calculte_Cude(int Number);
int main()
{
  int number, cube;
  printf(" \n Enter any integer Value : ");
  scanf("%d", &number);
   cube = Calculte_Cude(number);
  printf("\n Cube of a given number %d is  =  %d", number, cube);
 return 0;
}
int Calculte_Cude(int Number)
{
	return Number * Number * Number;
}