/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
void main()
{
    int n, i=1, sum=0;
     
    printf("\n Enter a number: ");
    scanf("%d", &n);
   
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
     
    if(sum==n)
        printf("%d is a Perfect Number.",n);
    else
        printf("%d is Not a Perfect Number.",n);
}
