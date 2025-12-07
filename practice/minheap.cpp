#include <bits/stdc++.h>
using namespace std;
void minHeapify(vector<int>& A, int n, int i) {
    int l = 2*i + 1;
    int r = 2*i + 2;
    int smallest = i;
    if (l < n && A[l] < A[smallest]) smallest = l;
    if (r < n && A[r] < A[smallest]) smallest = r;
    if (smallest != i) {
        swap(A[i], A[smallest]);
        minHeapify(A, n, smallest);
    }
}
void buildMinHeap(vector<int>& A) {
    int n = A.size();
    for (int i = n/2 - 1; i >= 0; i--)
        minHeapify(A, n, i);
}
int heapMinimum(vector<int>& A) {
    return A[0];
}
int heapExtractMin(vector<int>& A, int& n) {
    int mn = A[0];
    A[0] = A[n-1];
    n--;
    minHeapify(A, n, 0);
    return mn;
}
void heapDecreaseKey(vector<int>& A, int i, int key) {
    A[i] = key;
    while (i > 0 && A[(i-1)/2] > A[i]) {
        swap(A[i], A[(i-1)/2]);
        i = (i-1)/2;
    }
}
void minHeapInsert(vector<int>& A, int& n, int key) {
    A[n] = INT_MAX;
    heapDecreaseKey(A, n, key);
    n++;
}
void heapSortDescUsingMinHeap(vector<int>& A) {
    buildMinHeap(A);
    int n = A.size();
    for (int i = n - 1; i > 0; i--) {
        swap(A[0], A[i]);
        minHeapify(A, i, 0);
    }
}
int main() {
    vector<int> A = {5,3,17,10,84,19,6,22,9};
    int cap = 100;
    A.resize(cap);
    int n = 9;
    buildMinHeap(A);
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;
    cout << heapMinimum(A) << endl;
    cout << heapExtractMin(A, n) << endl;
    minHeapInsert(A, n, 1);
    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;
    vector<int> B(A.begin(), A.begin() + n);
    heapSortDescUsingMinHeap(B);
    for (int x : B) cout << x << " ";
    cout << endl;
}