#include <stdio.h>
int main()
{
   int i, a, b = 0;
   printf("enter a number: ");
   scanf("%d", &a);
   for(i=1; i<=a; i++)
   {
      if(a%i==0)
      {
         b++;
      }
   }
   if(b==2)
   {
      printf("%d is a prime number.", a);
   }
   else
   {
      printf("%d is not a prime number.", a);
   }
   return 0;
}
