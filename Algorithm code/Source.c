#include <stdio.h>
int array[3] = { 3,4,8 };
int arraytemp[3];
void makenumber(int n)
{
    for (int i = 0; i < 3; i++)
    {
        arraytemp[n] = i;
        if (n == 2)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d", array[ arraytemp[j]]);
            }
            printf("\n");

        }
        else
        {
            makenumber(n + 1);
        }
    }
}

void main()
{
    makenumber(0);
}