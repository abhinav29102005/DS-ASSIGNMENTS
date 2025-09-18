#include <iostream>

int findMissLin(int arr[], int n) {
    // Assuming array contains n-1 distinct integers in range 1 to n
    int total_sum = (n * (n + 1)) / 2;
    int arr_sum = 0;
    for (int i = 0; i < n; i++) {
        arr_sum += arr[i];
    }
    return total_sum - arr_sum;
}

int main8a() {
    using namespace std;
    int arr[] = {1, 2, 4, 5, 6}; // Missing 3, n=6 (range 1 to 6)
    int n_arr = 5;
    cout << "Missing number (Linear): " << findMissLin(arr, n_arr + 1) << endl;
    return 0;
}