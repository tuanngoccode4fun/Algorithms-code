#include <stdio.h>
int factorial(int N)
{
    if (N == 1) return 1;
    return N * factorial(N - 1);
}
void main()
{
    int k = 100;
    printf("Value %d\n", factorial(k));
    
}