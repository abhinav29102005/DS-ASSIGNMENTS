#include <iostream>
#include <queue>
using namespace std;
class Stack1Q {
private:
    queue<int> q;

public:
    void push(int x) {
        int s = q.size();
        q.push(x);
        for (int i = 0; i < s; i++) {
            q.push(q.front());
            q.pop();
        } 
    }

    int pop() {
        if (q.empty()) return -1;
        int val = q.front();
        q.pop(); 
        return val;
    }
    
    bool empty() { return q.empty(); }
};

int main() {
    Stack1Q s;
    s.push(10);
    s.push(20);
    cout << "Popped: " << s.pop() << endl;
    s.push(30);
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    return 0;
}