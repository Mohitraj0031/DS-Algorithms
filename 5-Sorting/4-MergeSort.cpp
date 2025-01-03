#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) temp.push_back(arr[left++]);
    while (right <= high) temp.push_back(arr[right++]);

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int mid = low + (high - low) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    vector<int> arr; // Declare an empty vector

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x); // Add elements dynamically
    }

    merge_sort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


// Merge sort's worst and average case of time complexity is O(N)
// And Best case time complexity is O(N * log2^n)
// Space complexity is O(N)