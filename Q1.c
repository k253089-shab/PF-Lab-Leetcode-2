#include <stdio.h>

void moveZeroes(int* nums, int numSize);

int main()
{
    int nums[5] = {0, 1, 0, 3, 12};
    int numSize = 5;
    
    moveZeroes(nums, numSize);

    return 0;
}

void moveZeroes(int* nums, int numSize){
    int countZero = 0;

    for (int i = 0; i < numSize; i++)
        if (nums[i] == 0)
            countZero++;

    int index = 0;
    for (int i = 0; i < numSize; i++)
        if (nums[i] != 0)
            nums[index++] = nums[i];

    while (index < numSize)
        nums[index++] = 0;

    for (int i = 0; i < numSize; i++)
        printf("%d ", nums[i]);
}
