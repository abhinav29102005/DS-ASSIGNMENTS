#include <iostream>
#include <cstring>
#include <algorithm>

void ssort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    using namespace std;
    char strArr[][100] = {"banana", "apple", "zebra", "cat"};
    int n = 4;
    ssort(strArr, n);
    cout << "Sorted strings:\n";
    for (int i = 0; i < n; i++) {
        cout << strArr[i] << endl;
    }
    return 0;
}