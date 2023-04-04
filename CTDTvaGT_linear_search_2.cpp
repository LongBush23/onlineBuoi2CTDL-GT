#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int result = linearSearch(arr, n, key);
    if (result == -1) {
        cout << "Element is not present in array" << endl;
    }
    else {
        cout << "Element is present at index " << result << endl;
    }
    return 0;
}
