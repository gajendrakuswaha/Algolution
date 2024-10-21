#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 10, 20, 30, 40 };
    size_t n = sizeof(arr)/sizeof(arr[0]);
 
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
 
    return 0;
}