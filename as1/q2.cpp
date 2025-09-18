#include <iostream>
using namespace std;
void remDup(int arr[], int& n) {
    if (n <= 1) return;

    int temp[100];
    int j = 0;

    for (int i = 0; i < n - 1; i++) {
        bool is_duplicate = false;
        for (int k = i + 1; k < n; k++) {
            if (arr[i] == arr[k]) {
                is_duplicate = true;
                break;
            }
        }
        if (!is_duplicate) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1]; 
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    n = j;
}

int main2() {
    using namespace std;
    int arr[] = {4, 7, 4, 1, 9, 7, 2, 9};
    int n = 8;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    int new_n = 0;
    int temp_arr[100];
    for (int i = 0; i < n; i++) {
        bool is_unique = true;
        for (int j = 0; j < new_n; j++) {
            if (arr[i] == temp_arr[j]) {
                is_unique = false;
                break;
            }
        }
        if (is_unique) {
            temp_arr[new_n++] = arr[i];
        }
    }

    n = new_n;
    for (int i = 0; i < n; i++) {
        arr[i] = temp_arr[i];
    }


    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}