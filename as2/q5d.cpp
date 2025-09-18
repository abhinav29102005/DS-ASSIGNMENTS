#include <iostream>

void utriMat(int A[3][3], int n) {
    using namespace std;
    int size = n * (n + 1) / 2;
    int B[6];
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            B[k++] = A[i][j];
        }
    }

    cout << "Upper Triangular elements stored in 1D array: ";
    for (int i = 0; i < size; i++) cout << B[i] << " ";
    cout << endl;
}

int main() {
    int A[3][3] = {{1, 2, 3}, {0, 5, 6}, {0, 0, 9}};
    utriMat(A, 3);
    return 0;
}