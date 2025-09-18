#include <iostream>

int findMissBin(int arr[], int n) {
    // The missing number is where arr[i] != i + 1
    int low = 0;
    int high = n - 1;
    int ans = n; // Default if last element is missing

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] != mid + 1) {
            ans = mid + 1;
            high = mid - 1; // Try to find missing element in the first half
        } else {
            low = mid + 1; // Missing element is in the second half
        }
    }
    return ans;
}

int main8b() {
    using namespace std;
    int arr[] = {1, 2, 4, 5, 6}; // Missing 3, n=6 (range 1 to 6)
    int n = 5;
    cout << "Missing number (Binary): " << findMissBin(arr, n) << endl;
    return 0;
}