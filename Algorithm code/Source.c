#include <stdio.h>
 int i = 0;
int factorial(long long  N, long long result)
{
    if (N == 1) return result;
    printf("Value before %d\n", ++i);
    factorial(N-1,N*result);
    printf("Value after %d\n", ++i);
}
void main()
{
   
    long long k =2000;
    long long m = 1;
    printf("Value %ld\n", factorial(k,m));
    
}