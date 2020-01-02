/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,b,c,n;
   printf("enter a,b value");
   scanf("%d %d",&a,&b);
   printf("1.add\n 2.sub\n 3.mul\n 4.division\n ");
   printf("enter your choice");
   scanf("%d",&n);
   switch(n)
   {
       case 1 :
       c=a+b;
       printf("addition of %d",c);
       break;
       case 2:
       c=a-b;
       printf("sub of %d",c);
       break;
       case 3:
       c=a*b;
       printf("multiplication of %d",c);
       break;
       case 4:
       c=a/b;
       printf("division of %d",c);
       break;
       default:
       printf("invalid choice");
       break;
   }
}
       
       
    
    

    
