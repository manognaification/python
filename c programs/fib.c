/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main() {
    int i, n, n1 = 0, n2 = 1, n3;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
