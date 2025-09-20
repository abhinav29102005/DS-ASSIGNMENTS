#include <iostream>

int findMissBin(int arr[], int n) {
    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] != mid + 1) {
            ans = mid + 1;
            high = mid - 1;
        } else {
            low = mid + 1; 
        }
    }
    return ans;
}

int main() {
    using namespace std;
    int arr[] = {1, 2, 4, 5, 6}; 
    int n = 5;
    cout << "Missing number (Binary): " << findMissBin(arr, n) << endl;
    return 0;
}