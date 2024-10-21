#include <iostream>
#include <algorithm>

void maxInSlidingWindow(int arr[], int n, int K) {
    if (K > n) return;
    for (int i = 0; i <= n - K; ++i) {
        int maxElement = arr[i]; 

        
        for (int j = 1; j < K; ++j) {
            maxElement = std::max(maxElement, arr[i + j]);
        }

        std::cout << maxElement << " ";
    }
    std::cout << std::endl; 
}

int main() {
    int arr[] = {1, 2, 3, 1, 4, 5};
    int K = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Maximums for each subarray of size " << K << ": ";
    maxInSlidingWindow(arr, n, K);

    return 0;
}
