/* C Program to find Largest of Three numbers using Nested If Statement */

#include<stdio.h>
int main()
{
 int a, b, c;
 printf("Please Enter three different values\n");
 scanf("%d %d %d", &a, &b, &c);
 if(a-b>0 && a-c>0)
  {
    printf("\n%d is Greater Than both %d and %d", a, b, c); 
  } 
 else
  { 
   if(b-c>0)
    {
     printf("\n%d is Greater Than both %d and %d", b, a, c);
    } 
   else
    {
     printf("\n%d is Greater than both %d and %d", c, a, b);
    }
  }
 return 0;
}