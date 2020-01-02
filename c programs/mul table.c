/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n;
   printf("enter a number");
   scanf("%d",&n);
   for(i=0;i<=10;i++)
   {
     printf("%d * %d=%d\n",n,i,n*i);
   }
    return 0;
}
