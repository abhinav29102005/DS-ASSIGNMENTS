#include <iostream>
#include <string>
#include <stack>
#include <cmath>
using namespace std;
int evalPost(const string& postfix) {
  stack<int> s;

    for (char c : postfix) {
        if (isdigit(c)) {
            s.push(c - '0');
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            int op2 = s.top(); s.pop();
            int op1 = s.top(); s.pop();
            
            switch (c) {
                case '+': s.push(op1 + op2); break;
                case '-': s.push(op1 - op2); break;
                case '*': s.push(op1 * op2); break;
                case '/': s.push(op1 / op2); break;
            }
        }
    }
    return s.top();
}

int main() {
    string postfix = "231*+9-";
    int result = evalPost(postfix);
    cout << "Postfix expression: " << postfix << endl;
    cout << "Result: " << result << endl;
    return 0;
}