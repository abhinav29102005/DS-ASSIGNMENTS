#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

std::string sRevStack(const std::string& str) {
    std::stack<char> s;
    for (char c : str) {
        s.push(c);
    }
    std::string reversed_str = "";
    while (!s.empty()) {
        reversed_str += s.top();
        s.pop();
    }
    return reversed_str;
}

int main() {
    using namespace std;
    string original = "DataStructure";
    string reversed = sRevStack(original);
    cout << "Original: " << original << endl;
    cout << "Reversed: " << reversed << endl;
    return 0;
}