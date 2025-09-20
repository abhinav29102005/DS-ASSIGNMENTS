#include <iostream>
using namespace std;
void rowColSum(int A[3][3], int r, int c) {
    
    for (int i = 0; i < r; i++) {
        int rSum = 0;
        for (int j = 0; j < c; j++) {
            rSum += A[i][j];
        }
        cout << "Sum of Row " << i << ": " << rSum << endl;
    }

    for (int j = 0; j < c; j++) {
        int cSum = 0;
        for (int i = 0; i < r; i++) {
            cSum += A[i][j];
        }
        cout << "Sum of Col " << j << ": " << cSum << endl;
    }
}

int main() {
    
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rowColSum(A, 3, 3);
    return 0;
}