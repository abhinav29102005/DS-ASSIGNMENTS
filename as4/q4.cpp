#include <iostream>
#include <queue>
#include <string>
#include <map>
using namespace std;
string findFirstNonRep(const string& str) {
    map<char, int> freq;
    queue<char> q;
    string result = "";

    for (char c : str) {
        freq[c]++;
        q.push(c);

        while (!q.empty()) {
            if (freq[q.front()] > 1) {
                q.pop();
            } else {
                result += q.front();
                break;
            }
        }
        if (q.empty()) {
            result += "-1";
        }
    }
    return result;
}

int main() {
    using namespace std;
    string input = "a a b c"; 
    string output = "";
    string simplified_input = "aabc"; 

    map<char, int> freq;
    queue<char> q;
    
    for (char c : simplified_input) {
        freq[c]++;
        q.push(c);

        while (!q.empty()) {
            if (freq[q.front()] > 1) {
                q.pop();
            } else {
                cout << q.front() << " ";
                break;
            }
        }
        if (q.empty()) {
            cout << "-1" << " ";
        }
    }
    cout << endl;
    
    return 0;
}