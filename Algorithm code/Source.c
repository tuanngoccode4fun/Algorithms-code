#include <stdio.h>
void tail(int N)
{
    if (N == 0) return;
    printf("Value %d\n", N);
    tail(N - 1);
}

void main()
{
    int k = 10;
    tail(k);
    
}