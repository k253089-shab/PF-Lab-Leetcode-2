#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main() {
    int nums1[] = {1,1,2};
    int size1 = 3;

    int k1 = removeDuplicates(nums1, size1);
    printf("k = %d, nums = ", k1);
    for (int i = 0; i < k1; i++)
        printf("%d ", nums1[i]);

    printf("\n");

    int nums2[] = {0,0,1,1,1,2,2,3,3,4};
    int size2 = 10;

    int k2 = removeDuplicates(nums2, size2);
    printf("k = %d, nums = ", k2);
    for (int i = 0; i < k2; i++)
        printf("%d ", nums2[i]);

    return 0;
}

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;

    int k = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}Q3.c
