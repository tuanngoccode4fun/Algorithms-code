#include <stdio.h>
 int iterationSum(int N)
{
    int result = 0;
    for (int i = 1; i <= N; i++)
    {
        result = result + i;
    }
    return result;
}
 int recursionSum(int N)
 {
     if (N == 1) return 1;
     return N + recursionSum(N - 1);
 }

void main()
{
    int k = 10;
    printf("Value of sum is %d\n", recursionSum(k));
    
}