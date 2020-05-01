#include <stdio.h>
void tail(int N)
{
    if (N == 0) return;
    printf("Value before %d\n", N);
    tail(N - 1);
   // printf("Value after %d\n", N);
}
void head(int N)
{
    if (N == 0) return;
    head(N - 1);
    printf("Value %d\n", N);
}

void main()
{
    int k = 10;
    tail(k);
    
}