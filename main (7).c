/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  // int n1;
  char name[20];
  /* printf("Enter a number:");
     scanf("%2d",&n1);
     printf("Your number is %d",n1); */
  printf ("Enter your name:");
  scanf ("%s", name);
  printf ("%.3s", name);
  return 0;
}
