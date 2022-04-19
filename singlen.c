int singleNumber(int *nums, int numsSize)
{
    int i = 0, j = 0, r = 0;
    while (i < numsSize)
    {
        j = i + 1; 
        while (j < numsSize)
        {
            if (nums[i] == nums[j])
                j++;
            else
            {
                return (nums[i]);
            }
        }
        i++;
    }

    return r;
}
int main()
{
    int num[] = {2, 2, 1, 1, 3, 5, 3};
    int size = sizeof(num) / 4;
    printf("%d\n", singleNumber(num, size));
}