#include <stdio.h>
 
int fibonacci(int n, int a, int b)
{
    if (n == 0) return a;
    if (n == 1) return b;
    return fibonacci(n - 1, b, a + b);
}
void main()
{
    printf("Value %ld\n", fibonacci(10,0,1));
    
}