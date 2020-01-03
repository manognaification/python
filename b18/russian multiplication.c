/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
 int a,b,result=0,m,n;
 printf("enter a,b values");
 scanf("%d%d",&a,&b);
 m=a;
 n=b;
 while(n>0)
 {
     if(n%2!=0)
     {
         result+=m;
     }
     m *=2;
     n/=2;
}
printf("%d *%d=%d",a,b,result);
return 0;
}
