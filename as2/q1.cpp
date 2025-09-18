#include <iostream>
using namespace std;
int bsearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main1() {

    int arr[] = {11, 12, 22, 25, 34, 64, 90}; // Array must be sorted
    int n = 7;
    int target = 25;
    int index = bsearch(arr, n, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found.\n";
    }
    return 0;
}