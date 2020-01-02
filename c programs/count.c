/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n, Count=0;

  printf(" Enter a number\n");
  scanf("%d", &n);

  while(n > 0)
  {
     n = n/ 10;
     Count = Count + 1;  
  }

  printf("\n Number of Digits in a Given Number = %d", Count);
  return 0;
}
