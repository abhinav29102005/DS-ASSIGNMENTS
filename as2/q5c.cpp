#include <iostream>

void ltriMat(int A[3][3], int n) {
    using namespace std;
    int size = n * (n + 1) / 2;
    int B[6]; // For 3x3, size is 6
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            B[k++] = A[i][j];
        }
    }

    cout << "Lower Triangular elements stored in 1D array: ";
    for (int i = 0; i < size; i++) cout << B[i] << " ";
    cout << endl;
}

int main() {
    int A[3][3] = {{1, 0, 0}, {2, 5, 0}, {3, 6, 9}};
    ltriMat(A, 3);
    return 0;
}