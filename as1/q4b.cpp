#include <iostream>
using namespace std;
void matMul(int A[3][3], int B[3][3], int C[3][3], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        std::cout << "Matrices cannot be multiplied.\n";
        return;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];

    matMul(A, B, C, 3, 3, 3, 3);

    cout << "Matrix Multiplication (A*B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}