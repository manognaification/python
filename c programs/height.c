/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int h;
  printf("enter the height in cm");
  scanf("%d",&h);
  if(h>150)
  {
   if(h<165)
  printf("average height");
  else if(h<190)
  printf("tall");
  else
  printf("abnormal height");
  }
  else
  {
      printf("dwarf");
  }
}

