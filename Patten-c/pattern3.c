/* C program to Print Square Number Pattern (user input) */
#include<stdio.h>
 
int main()
{
    int i, j, Num, Side;
    
    printf(" Please Enter any Integer Value  :  ");
    scanf("%d", &Num);
     
    printf(" \nPlease Enter Any Side of a Square : ");
    scanf("%d", &Side);
     
    for(i = 0; i < Side; i++)
    {
    	for(j = 0; j < Side; j++)
		{
           	printf("%d", Num);
        }
        printf("\n");
    }
    return 0;
}