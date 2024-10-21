#include <iostream>
#include <limits.h>

int maxSumKConsecutive(int arr[], int n, int k) {

    if (k > n) {
        std::cout << "Invalid" << std::endl;
        return -1;
    }

    int maxSum = 0;
    for (int i = 0; i < k; ++i) {
        maxSum += arr[i];
    }

    int windowSum = maxSum;

    for (int i = k; i < n; ++i) {
        windowSum += arr[i] - arr[i - k];
        maxSum = std::max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    int arr1[] = {100, 200, 300, 400};
    int k1 = 2;
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << "Maximum sum of " << k1 << " consecutive elements: " << maxSumKConsecutive(arr1, n1, k1) << std::endl;

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    std::cout << "Maximum sum of " << k2 << " consecutive elements: " << maxSumKConsecutive(arr2, n2, k2) << std::endl;

    int arr3[] = {2, 3};
    int k3 = 3;
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    maxSumKConsecutive(arr3, n3, k3);

    return 0;
}
