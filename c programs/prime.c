/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int i,n,count=0;
   printf("enter a number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   if(n%i==0)
   {
   count++;
   }
   }
   if(count==2)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime",n);
}
