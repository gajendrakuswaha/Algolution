#include <iostream>

class MinHeap {
public:
    MinHeap(int capacity) : size(0), capacity(capacity) {
        heap = new int[capacity];
    }

    ~MinHeap() {
        delete[] heap;
    }

    void insert(int num) {
        if (size < capacity) {
            heap[size++] = num;
            heapifyUp(size - 1);
        } else if (num > heap[0]) {
            heap[0] = num;
            heapifyDown(0);
        }
    }

    int getMin() {
        return heap[0]; 
    }

private:
    int* heap;
    int size;
    int capacity;

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[parent] <= heap[index]) break;
            std::swap(heap[parent], heap[index]);
            index = parent;
        }
    }

    void heapifyDown(int index) {
        while (true) {
            int left = 2 * index + 1;
            int right = 2 * index + 2;
            int smallest = index;

            if (left < size && heap[left] < heap[smallest]) {
                smallest = left;
            }
            if (right < size && heap[right] < heap[smallest]) {
                smallest = right;
            }
            if (smallest == index) break;

            std::swap(heap[index], heap[smallest]);
            index = smallest;
        }
    }
};

int findKthLargest(int nums[], int n, int k) {
    MinHeap minHeap(k);

    for (int i = 0; i < n; ++i) {
        minHeap.insert(nums[i]);
    }

    return minHeap.getMin();
}

int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findKthLargest(nums, n, k);
    std::cout << "The " << k << "th largest element is: " << result << std::endl;
    return 0;
}
