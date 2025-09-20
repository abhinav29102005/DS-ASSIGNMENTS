#include <iostream>
using namespace std;
int countDist(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool is_distinct = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_distinct = false;
                break;
            }
        }
        if (is_distinct) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {10, 20, 10, 30, 20, 40};
    int n = 6;
    cout << "Number of Distinct Elements: " << countDist(arr, n) << endl;
    return 0;
}