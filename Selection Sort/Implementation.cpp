#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    selectionSort(arr, n);
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
