#include <iostream>
#include <cstring>

void sreverse(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        std::swap(s[i], s[n - 1 - i]);
    }
}

int main() {
    using namespace std;
    char str[] = "DataStructure";
    sreverse(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}