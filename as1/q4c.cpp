#include <iostream>
using namespace std;
void matTrans(int A[3][3], int T[3][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            T[j][i] = A[i][j];
        }
    }
}

int main4c() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int T[3][3];

    matTrans(A, T, 3, 3);

    cout << "Matrix Transpose:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << T[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}