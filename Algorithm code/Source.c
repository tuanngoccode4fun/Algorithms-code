#include <stdio.h>
//int array[3] = { 3,4,8 };
//int arraytemp[3];
//char c[5] = "abcde";
//void makenumber(int n)
//{
//    for (int i = 0; i < 3; i++)
//    {
//        arraytemp[n] = i;
//        if (n == 2)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                printf("%d", array[ arraytemp[j]]);
//            }
//            printf("\n");
//
//        }
//        else
//        {
//            makenumber(n + 1);
//        }
//    }
//}
//
//void main()
//{
//    makenumber(0);
//}
int array[4] = { 2,4,8,7};
int remember[5];
void recursion(int n)
{
    for (int i = 0; i <4; i++)
    {
        remember[n] = i;
        if (n == 2)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d", array[remember[k]]);
            }

            printf("\n");
        }
        else
        {
            recursion(n + 1);
        }
    }
}
void main()
{
    for (int k = 0; k < 4; k++)
    {
        printf("vui long nhap phan tu thu %d : ", k);
        scanf_s("%d",&array[k]);
    }
    recursion(0);
}