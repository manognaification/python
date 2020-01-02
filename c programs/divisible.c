/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int a;
 printf("enter a value");
 scanf("%d",&a);
 if( (a%3==0 && a%5==0))
 printf("fizz bizz");
 else if(a%5==0)
 printf("bizz");
 else if (a%3==0)
 printf("fizz");
 else
 printf("%d",a);
}
