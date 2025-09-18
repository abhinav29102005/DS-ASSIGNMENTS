#include <iostream>
using namespace std;
void create(int arr[], int& n) {
    cout << "Enter number of elements (max 100): ";
    cin >> n;
    if (n < 1 || n > 100) {
        cout << "Invalid size. Setting size to 0.\n";
        n = 0;
        return;
    }
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void display(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int arr[], int& n) {
    if (n >= 100) {
        cout << "Array is full.\n";
        return;
    }
    int val, pos;
    cout << "Enter value to insert: ";
    cin >> val;
    cout << "Enter position (0 to " << n << "): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    cout << "Element inserted.\n";
}

void del(int arr[], int& n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    int pos;
    cout << "Enter position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Element deleted.\n";
}

void lsearch(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    int val;
    cout << "Enter value to search: ";
    cin >> val;
    for (int i = 0; i < n; i++) {
        if (arr[i] == val) {
            cout << "Element " << val << " found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found.\n";
}

int main1() {
    using namespace std;
    int arr[100];
    int n = 0;
    int choice;

    do {
        cout << "\n---MENU---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: create(arr, n); break;
            case 2: display(arr, n); break;
            case 3: insert(arr, n); break;
            case 4: del(arr, n); break;
            case 5: lsearch(arr, n); break;
            case 6: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);
    return 0;
}