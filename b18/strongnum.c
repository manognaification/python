/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
 int num,i,fact,r,sum=0,temp;
 printf("Enter a number ");
 scanf("%d",&num);
 temp=num;
 while(num)
 {
     i=1,fact=1;
     r=num%10;
     while(i<=r)
     {
        fact=fact*i;
        i++;
     }
     sum=sum+fact;
     num=num/10;
}
 if(sum==temp)
  printf("\nThe number %d is a strong number",temp);
 else
  printf("\nThe number %d is not a strong number",temp);
 return 0;
}
