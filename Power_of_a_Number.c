/*This program to find power of a number allows the user 
to enter an integer value and the exponent value. Next, 
this C program will calculate the power using While Loop.*/

// C Program to find power of a Number using While loop
#include <stdio.h>
int main ()
{
    int i = 1, Number, Exponent;
    long Power = 1;
    printf("\n Enter any Number : ");
    scanf("%d", &Number);
    printf("\n Enter the Exponent value : ");
    scanf("%d", &Exponent);
    while (i <= Exponent)
    {
        Power = Power * Number;
        i++;
    }
    printf("\n The Final result of %d to the Power %d is = %ld", Number, Exponent, Power);
    return 0;
}