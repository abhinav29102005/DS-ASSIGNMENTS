#include <iostream>
#include <cstring>

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void sdelVowels(char s[]) {
    int n = strlen(s);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (!isVowel(s[i])) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main9c() {
    using namespace std;
    char str[] = "Programming";
    sdelVowels(str);
    cout << "String without vowels: " << str << endl;
    return 0;
}