#include <stdio.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *ptr = NULL;
    int i = -1, n = 0;

    while (++i < numsSize)
    {
        int j = 0;
        while (++j < numsSize)
        {
            n = nums[i] + nums[j];
            if (n == target)
            {
                // printf("[%d,%d]",  i,  j);
                ptr = malloc(sizeof(int) * 2);
                ptr[0] = i;
                ptr[1] = j;
                return ptr;
            }
        }
    }
    return (ptr);
}
int main()
{
    int n[] = {2,7,11,15};
    int s = sizeof(n) / sizeof(int);
    int *arr = twoSum(n, s, 18, n);
    printf("[%d, %d]\n", arr[0], arr[1]);
}