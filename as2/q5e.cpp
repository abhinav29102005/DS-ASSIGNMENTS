#include <iostream>

void symMat(int A[3][3], int n) {
    using namespace std;
    int size = n * (n + 1) / 2;
    int B[6];
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            B[k++] = A[i][j];
        }
    }

    cout << "Symmetric Matrix elements stored in 1D array: ";
    for (int i = 0; i < size; i++) cout << B[i] << " ";
    cout << endl;
}

int main() {
    using namespace std;
    int n = 3;
    int A[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };
    symMat(A, n);
    return 0;
}