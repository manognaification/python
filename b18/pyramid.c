/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
  int n,i,j;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n-i; j++)
      printf(" ");

    for (j = 1; j <= 2*i-1; j++)
      printf("*");

    printf("\n");
  }

  for (i = 1; i <= n - 1; i++)
  {
    for (j = 1; j <= i; j++)
      printf(" ");

    for (j = 1 ; j <= 2*(n-i)-1; j++)
      printf("*");

    printf("\n");
  }

  return 0;
}
