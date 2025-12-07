#include <bits/stdc++.h>
using namespace std;
void maxHeapify(vector<int>& A, int n, int i) {
    int l = 2*i + 1;
    int r = 2*i + 2;
    int largest = i;
    if (l < n && A[l] > A[largest]) largest = l;
    if (r < n && A[r] > A[largest]) largest = r;
    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(A, n, largest);
    }
}
void buildMaxHeap(vector<int>& A) {
    int n = A.size();
    for (int i = n/2 - 1; i >= 0; i--)
        maxHeapify(A, n, i);
}
void heapSort(vector<int>& A) {
    buildMaxHeap(A);
    int n = A.size();
    for (int i = n - 1; i > 0; i--) {
        swap(A[0], A[i]);
        maxHeapify(A, i, 0);
    }
}
int heapMaximum(vector<int>& A) {
    return A[0];
}
int heapExtractMax(vector<int>& A, int& n) {
    int mx = A[0];
    A[0] = A[n-1];
    n--;
    maxHeapify(A, n, 0);
    return mx;
}
void heapIncreaseKey(vector<int>& A, int i, int key) {
    A[i] = key;
    while (i > 0 && A[(i-1)/2] < A[i]) {
        swap(A[i], A[(i-1)/2]);
        i = (i-1)/2;
    }
}
void maxHeapInsert(vector<int>& A, int& n, int key) {
    A[n] = INT_MIN;
    heapIncreaseKey(A, n, key);
    n++;
}
int main() {
    vector<int> A = {5,3,17,10,84,19,6,22,9};
    int n = A.size();
    buildMaxHeap(A);
    for (int x:A) cout<<x<<" "; cout<<endl;
    cout<<heapMaximum(A)<<endl;
    cout<<heapExtractMax(A,n)<<endl;
    maxHeapInsert(A,n,50);
    for (int i=0;i<n;i++) cout<<A[i]<<" "; cout<<endl;
    heapSort(A);
    for (int x:A) cout<<x<<" "; cout<<endl;
}