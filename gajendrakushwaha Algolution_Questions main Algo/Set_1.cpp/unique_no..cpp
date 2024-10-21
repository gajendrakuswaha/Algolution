#include <iostream>

using namespace std;

int main() {
    int r = 0, a[50], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < j; k++) {
            if (a[k] != a[j]) r++;
        }
    }
    cout << r << endl;
    return 0;
}