#include <iostream>
#include <unordered_set>
#include <cmath>

const int MAX_PRIME = 19;
const int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};

void getPrimeFactors(int N, std::unordered_set<int>& primeFactors) {
    for (int prime : primes) {
        if (N < prime) break;
        if (N % prime == 0) {
            primeFactors.insert(prime);
            while (N % prime == 0) {
                N /= prime;
            }
        }
    }
}

int countSquareFreeDivisors(int N) {
    int count = 0;

    for (int i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            
            if (i != 1 && isSquareFree(i)) {
                count++;
            }
            
            if (i != N / i && N / i != 1 && isSquareFree(N / i)) {
                count++;
            }
        }
    }

    return count;
}

bool isSquareFree(int num) {
    for (int i = 2; i * i <= num; ++i) {
        if (num % (i * i) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    std::cin >> N;

    std::unordered_set<int> primeFactors;
    getPrimeFactors(N, primeFactors);

    int result = countSquareFreeDivisors(N);
    std::cout << result << std::endl;

    return 0;
}
