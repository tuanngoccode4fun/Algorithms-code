#include <stdio.h>
int binarySearch(int nums[], int low, int high, int num)
{
    if (low > high)
    {
        return -1;
    }
    int midle = low + (high - low) / 2;
    int value = nums[midle];
   
    if (nums[midle] == num)
    {
        printf("value == %d %d %d %d\n", low, high, midle, value);
        return midle;
    }
    if (num < nums[midle])
    {
        printf("value < %d %d %d %d\n", low, high, midle, value);
        return binarySearch(nums, low, midle - 1,num);
    }
    else
    {
        printf("value > %d %d %d %d\n", low, high, midle, value);
        return binarySearch(nums, midle+1,high, num);
    }

}
void main()
{
    int nums[] = { 0,10,20,40,50,60 };
    int num = 40;
    int sizenums = sizeof(nums);
    int sizelow = sizeof(nums[0]);
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("Value %ld\n", binarySearch(nums,0,n-1,num));
    
}