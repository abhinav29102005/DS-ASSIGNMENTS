#include <iostream>
#include <cmath>

int getTriDiag(int B[], int i, int j, int n) {
    if (std::abs(i - j) > 1) {
        return 0;
    }
    
    if (i == j) { 
        return B[n - 1 + i];
    } else if (j == i - 1) { 
        return B[i - 1];
    } else { 
        return B[2 * n - 2 + i];
    }
}

void triDiagMat(int A[4][4], int n) {
    using namespace std;
    int size = 3 * n - 2;
    int B[10];
    int k = 0;

    for (int i = 1; i < n; i++) {
        B[k++] = A[i][i - 1];
    }

    for (int i = 0; i < n; i++) {
        B[k++] = A[i][i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        B[k++] = A[i][i + 1];
    }

    cout << "Tri-diagonal elements stored in 1D array (Lower, Main, Upper): ";
    for (int i = 0; i < size; i++) cout << B[i] << " ";
    cout << endl;
}

int main() {
    using namespace std;
    int n = 4;
    int A[4][4] = {
        {1, 2, 0, 0},
        {3, 4, 5, 0},
        {0, 6, 7, 8},
        {0, 0, 9, 10}
    };
    triDiagMat(A, n); 
    return 0;
}