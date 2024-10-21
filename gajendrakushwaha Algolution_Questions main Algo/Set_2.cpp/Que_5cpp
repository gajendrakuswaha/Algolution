#include <iostream>

int findEquilibriumIndex(int arr[], int n) {
    if (n == 0) return -1;

    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; ++i) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            return i + 1;
        }
        leftSum += arr[i];
    }

    return -1;
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findEquilibriumIndex(arr, n);
    std::cout << "Equilibrium Index: " << result << std::endl;

    return 0;
}
