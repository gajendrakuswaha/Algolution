#include <iostream>
#include <unordered_map>

void maxLengthSubarrayWithSum(int nums[], int n, int target) {
    std::unordered_map<int, int> sumIndexMap;
    int cumulativeSum = 0; 
    int maxLength = 0; 
    int startIndex = -1; 

    for (int i = 0; i < n; ++i) {
        cumulativeSum += nums[i];

        if (cumulativeSum == target) {
            maxLength = i + 1;
            startIndex = 0;
        }

        if (sumIndexMap.find(cumulativeSum - target) != sumIndexMap.end()) {
            int previousIndex = sumIndexMap[cumulativeSum - target];
            int length = i - previousIndex;

            if (length > maxLength) {
                maxLength = length;
                startIndex = previousIndex + 1;
            }
        }

        if (sumIndexMap.find(cumulativeSum) == sumIndexMap.end()) {
            sumIndexMap[cumulativeSum] = i;
        }
    }

    if (maxLength > 0) {
        std::cout << "Longest subarray with sum " << target << ": { ";
        for (int i = startIndex; i < startIndex + maxLength; ++i) {
            std::cout << nums[i] << " ";
        }
        std::cout << "}" << std::endl;
    } else {
        std::cout << "No subarray found with the given sum." << std::endl;
    }
}

int main() {
    int nums[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int target = 8;
    int n = sizeof(nums) / sizeof(nums[0]);

    maxLengthSubarrayWithSum(nums, n, target);
    
    return 0;
}
