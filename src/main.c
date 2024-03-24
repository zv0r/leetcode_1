#include <stdio.h>
#include <stdlib.h>

int* twoSum1(int* nums, int numsSize, int target, int* returnSize);

void printArray(const int* const nums, int numsSize);

int main(void) {
    int resultSize = 0;
    int nums1[4] = {2, 15, 11, 7};
    int nums2[3] = {3, 2, 4};
    int nums3[2] = {3, 3};
    int nums4[4] = {0, 4, 3, 0};
    int nums5[5] = {-1, -2, -3, -4, -5};

    int* result1 = twoSum1(nums1, 4, 9, &resultSize);
    int* result2 = twoSum1(nums2, 3, 6, &resultSize);
    int* result3 = twoSum1(nums3, 2, 6, &resultSize);
    int* result4 = twoSum1(nums4, 4, 0, &resultSize);
    int* result5 = twoSum1(nums5, 5, -8, &resultSize);

    printf("%d %d\n", result1[0], result1[1]);
    printf("%d %d\n", result2[0], result2[1]);
    printf("%d %d\n", result3[0], result3[1]);
    printf("%d %d\n", result4[0], result4[1]);
    printf("%d %d\n", result5[0], result5[1]);

    free(result1);
    free(result2);
    free(result3);
    free(result4);
    free(result5);
    return EXIT_SUCCESS;
}

void printArray(const int* const nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        printf(i == 0 ? "" : " ");
        printf("%d", nums[i]);
    }
    printf("\n");
}

int* twoSum1(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = calloc(2, sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < numsSize; j++) {
            if (j != i && nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                break;
            }
        }
    }
    return result;
}
