#include <iostream>
#include <cstring>
using namespace std;
void sconcat(char s1[], const char s2[]) {
    strcat(s1, s2);
}

int main() {
    using namespace std;
    char str1[50] = "Hello";
    char str2[] = "World";
    sconcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
    return 0;
}