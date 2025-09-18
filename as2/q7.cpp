#include <iostream>
using namespace std;
int countInv(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main12() {

    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;
    cout << "Number of Inversions: " << countInv(arr, n) << endl;
    return 0;
}