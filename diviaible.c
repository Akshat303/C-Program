// C program to check the number is divisible by given number
#include<stdio.h>
int main()
{
    int num, i;
    printf("\n enter the number you want to chack is ");
    scanf("%d", &num);
    printf("\n enter a divisor number is ");
    scanf("%d",&i);
    ((num % i == 0 ) ) ? 
  		printf("\n Given number %d is Divisible by %d ", num, i) : 
			printf("\n Given number %d is Not Divisible by %d ", num, i);
 
 	return 0;

}