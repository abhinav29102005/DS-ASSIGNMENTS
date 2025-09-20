#include <iostream>
#include <queue>
using namespace std;
class Stack2Q {
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int x) {
        q1.push(x); 
    }

    int pop() {
        if (q1.empty()) return -1;
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int val = q1.front();
        q1.pop();
        swap(q1, q2);
        return val; 
    }
    
    bool empty() { return q1.empty(); }
};

int main() {
    Stack2Q s;
    s.push(10);
    s.push(20);
    cout << "Popped: " << s.pop() << endl; 
    s.push(30);
    cout << "Popped: " << s.pop() << endl; 
    cout << "Popped: " << s.pop() << endl; 
    return 0;
}