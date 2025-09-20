#include <iostream>
#include <string>
#include <stack>

bool areBracketsBal(const std::string& exp) {
    std::stack<char> s;
    for (char c : exp) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) return false;

            char top = s.top();
            s.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    using namespace std;
    string exp1 = "{([])}";
    string exp2 = "([)]";

    cout << exp1 << " is " << (areBracketsBal(exp1) ? "Balanced" : "Not Balanced") << endl;
    cout << exp2 << " is " << (areBracketsBal(exp2) ? "Balanced" : "Not Balanced") << endl;

    return 0;
}