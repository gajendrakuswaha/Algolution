#include <iostream>
#include <vector>

bool hasPairWithSumNaive(const std::vector<int>& A, int X) {
    int N = A.size();
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (A[i] + A[j] == X) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> A = {1, 2, 4, 5, 7, 11};
    int X = 9;

    if (hasPairWithSumNaive(A, X)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
