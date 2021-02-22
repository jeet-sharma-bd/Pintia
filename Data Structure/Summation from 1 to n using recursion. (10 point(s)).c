#include<stdio.h>
 
int sumOfRange(int x) 
{
   int res;
   if (x == 1) 
   {
      return 1;
   } else 
   {
      res = x + sumOfRange(x - 1); 
   }
   return res;
}
 
int main() 
{
   int n;
   int sum;
	
   scanf("%d", &n);
 

   printf("%d\n",sumOfRange(n));
 
   return 0;
}

