#include <iostream>
#include <algorithm>

struct Triplet {
    int row, col, val;
};

void sMul(Triplet A[], Triplet B[], Triplet C[]) {
    using namespace std;
    if (A[0].col != B[0].row) {
        C[0].val = 0;
        return;
    }

    C[0].row = A[0].row;
    C[0].col = B[0].col;
    C[0].val = 0;

    int r = A[0].row;
    int c = B[0].col;
    int temp_C[10][10] = {0};

    for(int i = 1; i <= A[0].val; ++i) {
        int ar = A[i].row;
        int ac = A[i].col;
        int av = A[i].val;
        
        for(int j = 1; j <= B[0].val; ++j) {
            if (B[j].row == ac) {
                int bc = B[j].col;
                int bv = B[j].val;
                temp_C[ar][bc] += av * bv;
            }
        }
    }
    
    int k_c = 1;
    for(int i_r = 0; i_r < r; ++i_r) {
        for(int j_c = 0; j_c < c; ++j_c) {
            if (temp_C[i_r][j_c] != 0) {
                C[k_c].row = i_r;
                C[k_c].col = j_c;
                C[k_c].val = temp_C[i_r][j_c];
                k_c++;
            }
        }
    }
    C[0].val = k_c - 1;
}

int main() {
    using namespace std;
    Triplet A_mul[] = {{2, 3, 2}, {0, 0, 1}, {1, 1, 2}};
    Triplet B_mul[] = {{3, 2, 2}, {0, 0, 3}, {1, 1, 4}};
    Triplet C_mul[10];
    
    sMul(A_mul, B_mul, C_mul);
    cout << "Multiplication Result (R, C, V):\n";
    for (int i = 0; i <= C_mul[0].val; i++) {
        cout << "(" << C_mul[i].row << ", " << C_mul[i].col << ", " << C_mul[i].val << ")\n";
    }
    return 0;
}