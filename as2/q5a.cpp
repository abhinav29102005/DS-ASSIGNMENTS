#include <iostream>
using namespace std;
void diagMat(int A[3][3], int n) {
    int B[3]; 
    for (int i = 0; i < n; i++) {
        B[i] = A[i][i];
    }
    cout << "Diagonal elements stored in 1D array: ";
    for (int i = 0; i < n; i++) cout << B[i] << " ";
    cout << endl;
}
int main() {
    int A[3][3] = {{1, 0, 0}, {0, 5, 0}, {0, 0, 9}};
    diagMat(A, 3);
    return 0;
}