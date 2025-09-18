#include <iostream>
#include <algorithm> // For swap
    using namespace std;
void reverseArr(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main4a() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    reverseArr(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}