#include <stdio.h>

/**
 * @brief Finds a contiguous subarray whose sum equals the target.
 *
 * Searches for the first contiguous subarray within arr of length len
 * that sums to target. If found, stores the inclusive start and end indices
 * in the pointers provided.
 *
 * @param arr      Pointer to the array of integers.
 * @param len      Number of elements in the array.
 * @param target   Desired sum of the subarray.
 * @param start    Pointer to store the start index (inclusive) if found.
 * @param end      Pointer to store the end index (inclusive) if found.
 * @return         0 if a subarray is found, 1 otherwise.
 */
int findSubarray(int* arr, unsigned int len, int target,
                 unsigned int* start, unsigned int* end)
{
    for (unsigned int i = 0; i < len; ++i) {
        int sum = 0;
        for (unsigned int j = i; j < len; ++j) {
            sum += arr[j];
            if (sum == target) {
                *start = i;
                *end = j;
                return 0;
            }
        }
    }
    return 1;
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    unsigned int len = 5;
    int target = 9;
    unsigned int start, end;
    if (findSubarray(arr, len, target, &start, &end) == 0)
        printf("Subarray found from index %u to %u\n", start, end);
    else
        printf("No subarray found\n");
    return 0;
}
