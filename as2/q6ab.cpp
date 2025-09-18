#include <iostream>
#include <algorithm>

struct Triplet {
    int row, col, val;
};

void sAdd(Triplet A[], Triplet B[], Triplet C[]) {
    using namespace std;
    if (A[0].row != B[0].row || A[0].col != B[0].col) {
        C[0].val = 0;
        return;
    }

    C[0].row = A[0].row;
    C[0].col = A[0].col;

    int i = 1, j = 1, k = 1;
    while (i <= A[0].val && j <= B[0].val) {
        long posA = A[i].row * A[0].col + A[i].col;
        long posB = B[j].row * B[0].col + B[j].col;

        if (posA < posB) {
            C[k++] = A[i++];
        } else if (posB < posA) {
            C[k++] = B[j++];
        } else {
            int sum = A[i].val + B[j].val;
            if (sum != 0) {
                C[k].row = A[i].row;
                C[k].col = A[i].col;
                C[k++].val = sum;
            }
            i++;
            j++;
        }
    }

    while (i <= A[0].val) C[k++] = A[i++];
    while (j <= B[0].val) C[k++] = B[j++];

    C[0].val = k - 1;
}

int mainAdd() {
    using namespace std;
    Triplet A[] = {{3, 3, 2}, {0, 1, 10}, {1, 0, 20}};
    Triplet B[] = {{3, 3, 2}, {0, 1, 5}, {2, 2, 30}};
    Triplet C_add[10];
    sAdd(A, B, C_add);
    cout << "Addition Result (R, C, V):\n";
    for (int i = 0; i <= C_add[0].val; i++) {
        cout << "(" << C_add[i].row << ", " << C_add[i].col << ", " << C_add[i].val << ")\n";
    }
    return 0;
}