#include <iostream>
#include <cctype>

void sToLow(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
}

int main9e() {
    using namespace std;
    char str[] = "HeLlO WoRlD";
    sToLow(str);
    cout << "Lowercase string: " << str << endl;
    return 0;
}