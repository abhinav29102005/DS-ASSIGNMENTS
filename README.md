# 🚀 Data Structures Lab - UCS301

<div align="center">

![Data Structures](https://readme-typing-svg.herokuapp.com?font=Orbitron&weight=900&size=40&duration=3000&pause=1000&color=F97316&center=true&vCenter=true&multiline=true&repeat=false&width=600&height=100&lines=Data+Structures+Lab;UCS301+Programming+Assignments)

[![Made with C++](https://img.shields.io/badge/Made%20with-C%2B%2B-blue?style=for-the-badge&logo=cplusplus)](https://isocpp.org/)
[![Lab Assignments](https://img.shields.io/badge/Lab%20Assignments-5-orange?style=for-the-badge)](https://github.com/abhinav29102005/DS-ASSIGNMENTS)
[![Problems Solved](https://img.shields.io/badge/Problems%20Solved-35%2B-success?style=for-the-badge)](https://github.com/abhinav29102005/DS-ASSIGNMENTS)
[![License MIT](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)](LICENSE)

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif" width="100%">

</div>

## 🎯 Overview

A comprehensive collection of **Data Structures** programming assignments implemented in C++. This repository contains well-documented solutions to all lab assignments for the **UCS301** course, featuring clean code, detailed explanations, and complexity analysis.

**Created by: Abhinav Kumar Singh**

<div align="center">

```
📚 Arrays → 🥞 Stacks → 🚶‍♂️ Queues → 🔗 Linked Lists
    ↓         ↓          ↓           ↓
  Sort &    Infix to   Queue      List Operations
  Search    Postfix   Magic      & Algorithms
```

</div>

## 📊 Repository Statistics

<div align="center">
<img src="https://github-readme-stats.vercel.app/api?username=abhinav29102005&show_icons=true&theme=radical&count_private=true&include_all_commits=true" height="165">
<img src="https://github-readme-streak-stats.herokuapp.com/?user=abhinav29102005&theme=radical" height="165">
</div>

## 🗂️ Project Structure

<details>
<summary>📁 <strong>Click to expand repository structure</strong></summary>

```
📦 data-structures-lab/
├── 🏠 README.md
├── 📜 LICENSE
├── 🤝 CONTRIBUTING.md
├── 🚫 .gitignore
├── 📋 docs/
│   └── 🎨 lab-overview.html
├── 📚 Assignment 1 - Arrays/
│   ├── 🔧 q1.cpp         # Menu-driven array operations
│   ├── 🧹 q2q3.cpp       # Remove duplicates
│   ├── 🔄 q4a.cpp        # Array reversal
│   ├── ✖️ q4b.cpp        # Matrix multiplication
│   ├── 🔀 q4c.cpp        # Matrix transpose
│   └── ➕ q5.cpp         # Row/Column sum
├── 📈 Assignment 2 - Advanced Arrays/
│   ├── 🔍 q1.cpp         # Binary search
│   ├── 🫧 q2.cpp         # Bubble sort
│   ├── ❓ q3a.cpp        # Missing number (linear)
│   ├── 🎯 q3b.cpp        # Missing number (binary)
│   ├── 📝 q4a-e.cpp      # String operations
│   ├── 📊 q5a-e.cpp      # Special matrices
│   ├── 🕸️ q6ab.cpp       # Sparse matrix ops
│   ├── 🔢 q7.cpp         # Count inversions
│   └── 🎲 q8.cpp         # Distinct elements
├── 🥞 Assignment 3 - Stacks/
│   ├── 📚 q1.cpp         # Stack ADT
│   ├── 🔄 q2.cpp         # String reversal
│   ├── ⚖️ q3.cpp         # Balanced parentheses
│   ├── 🔀 q4.cpp         # Infix to postfix
│   └── 🧮 q5.cpp         # Postfix evaluation
├── 🚶‍♂️ Assignment 4 - Queues/
│   ├── 📦 q1.cpp         # Simple queue
│   ├── 🔄 q2.cpp         # Circular queue
│   ├── 🔤 q3.cpp         # First non-repeating char
│   ├── 🔤 q4.cpp         # Non-repeating char (alt)
│   ├── 📚 q5a.cpp        # Stack using 2 queues
│   └── 🎯 q5b.cpp        # Stack using 1 queue
└── 🔗 Assignment 5 - Linked Lists/
    ├── 🔧 q1.cpp         # SLL operations
    ├── 🎯 q2.cpp         # Count & delete occurrences
    ├── 🎪 q3.cpp         # Find middle element
    └── 🔄 q4.cpp         # Reverse linked list
```

</details>

## 🎨 Lab Assignments

<div align="center">
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif" width="100%">
</div>

### 📚 Lab 1: Arrays Fundamentals
<div align="left">
<img src="https://img.shields.io/badge/Completed-100%25-success?style=flat-square" alt="Progress">
<img src="https://img.shields.io/badge/Problems-5-blue?style=flat-square" alt="Problems">
<img src="https://img.shields.io/badge/Difficulty-Beginner-green?style=flat-square" alt="Difficulty">
</div>

```cpp
// 🔧 Menu-driven operations: CREATE, DISPLAY, INSERT, DELETE, SEARCH
void create(int arr[], int& n);    // O(n) time, O(1) space
void insert(int arr[], int& n);    // O(n) time, O(1) space  
void del(int arr[], int& n);       // O(n) time, O(1) space
```

**Key Features:**
- ✅ Complete menu-driven array management
- ✅ Duplicate removal with order preservation  
- ✅ Matrix operations (multiplication & transpose)
- ✅ 2D array sum calculations

---

### 📈 Lab 2: Advanced Array Operations
<div align="left">
<img src="https://img.shields.io/badge/Completed-100%25-success?style=flat-square" alt="Progress">
<img src="https://img.shields.io/badge/Problems-8-blue?style=flat-square" alt="Problems">
<img src="https://img.shields.io/badge/Difficulty-Intermediate-orange?style=flat-square" alt="Difficulty">
</div>

```cpp
// 🔍 Binary Search Implementation
int bsearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;  // O(log n) time complexity
}
```

**Advanced Topics:**
- 🔍 **Binary Search**: O(log n) search algorithm
- 🫧 **Bubble Sort**: O(n²) sorting with optimization
- 📝 **String Operations**: Comprehensive string manipulation
- 🕸️ **Sparse Matrices**: Space-efficient matrix representation

---

### 🥞 Lab 3: Stack Data Structure
<div align="left">
<img src="https://img.shields.io/badge/Completed-100%25-success?style=flat-square" alt="Progress">
<img src="https://img.shields.io/badge/Problems-5-blue?style=flat-square" alt="Problems">
<img src="https://img.shields.io/badge/Difficulty-Intermediate-orange?style=flat-square" alt="Difficulty">
</div>

```cpp
// 🥞 Stack Class Implementation
class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    void push(int val);     // O(1)
    int pop();              // O(1) 
    bool isEmpty();         // O(1)
    bool isFull();          // O(1)
    void display();         // O(n)
    int peek();             // O(1)
};
```

**Stack Applications:**
- ⚖️ **Balanced Parentheses**: Validate bracket matching
- 🔀 **Infix to Postfix**: Expression conversion algorithm
- 🧮 **Postfix Evaluation**: Mathematical expression solver
- 🔄 **String Reversal**: Stack-based string manipulation

---

### 🚶‍♂️ Lab 4: Queue Data Structure
<div align="left">
<img src="https://img.shields.io/badge/Completed-100%25-success?style=flat-square" alt="Progress">
<img src="https://img.shields.io/badge/Problems-5-blue?style=flat-square" alt="Problems">
<img src="https://img.shields.io/badge/Difficulty-Intermediate-orange?style=flat-square" alt="Difficulty">
</div>

```cpp
// 🚶‍♂️ Queue Implementation Comparison
class SQueue {          // Simple Queue
    int front, rear;    // Linear implementation
};

class CQueue {          // Circular Queue  
    int front, rear;    // Circular implementation
    bool isFull() { return (rear + 1) % C_SIZE == front; }
};
```

**Queue Applications:**
- 📦 **Simple Queue**: FIFO operations with linear array
- 🔄 **Circular Queue**: Space-efficient circular implementation
- 🔤 **First Non-Repeating**: Character frequency tracking
- 🏗️ **Stack using Queues**: Data structure transformation

---

### 🔗 Lab 5: Linked Lists
<div align="left">
<img src="https://img.shields.io/badge/Completed-100%25-success?style=flat-square" alt="Progress">
<img src="https://img.shields.io/badge/Problems-4-blue?style=flat-square" alt="Problems">
<img src="https://img.shields.io/badge/Difficulty-Advanced-red?style=flat-square" alt="Difficulty">
</div>

```cpp
// 🔗 Linked List Node Structure
struct Node {
    int data;
    Node* next;
};

// 🎪 Find Middle Element (Two Pointer Technique)
int findMid(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;      // Move 1 step
        fast = fast->next->next; // Move 2 steps  
    }
    return slow->data;  // O(n) time, O(1) space
}
```

**Linked List Operations:**
- 🔧 **Complete SLL Operations**: Insert, delete, search
- 🎯 **Key Occurrence Management**: Count and remove duplicates
- 🎪 **Middle Element Finder**: Efficient two-pointer algorithm
- 🔄 **List Reversal**: Iterative pointer manipulation

## 📊 Complexity Analysis

<div align="center">

| Operation | Time Complexity | Space Complexity | Data Structure |
|-----------|----------------|------------------|----------------|
| 🔍 Linear Search | O(n) | O(1) | Array |
| 🎯 Binary Search | O(log n) | O(1) | Sorted Array |
| 🫧 Bubble Sort | O(n²) | O(1) | Array |
| 📚 Stack Push/Pop | O(1) | O(1) | Stack |
| 🚶‍♂️ Queue Enqueue/Dequeue | O(1) | O(1) | Queue |
| 🔗 Linked List Insert | O(1) | O(1) | Linked List |
| 🎪 Find Middle | O(n) | O(1) | Linked List |
| ✖️ Matrix Multiply | O(n³) | O(1) | 2D Array |

</div>

## 🚀 Quick Start

<div align="center">
<img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&pause=1000&color=F75C7E&center=true&vCenter=true&width=435&lines=Ready+to+compile+and+run!;Let's+explore+data+structures!" alt="Typing SVG" />
</div>

### 1️⃣ Clone Repository
```bash
git clone https://github.com/abhinav29102005/DS-ASSIGNMENTS.git
cd DS-ASSIGNMENTS
```

### 2️⃣ Compile Programs
```bash
# For individual programs
g++ -o program as1/q1.cpp

# With debug information
g++ -g -Wall -Wextra as1/q1.cpp -o program

# For all programs in a directory
cd as1/ && g++ *.cpp
```

### 3️⃣ Run Programs
```bash
./program
```

### 4️⃣ Interactive Menu Example
```
---MENU---
1. CREATE
2. DISPLAY  
3. INSERT
4. DELETE
5. LINEAR SEARCH
6. EXIT
Enter your choice: _
```

## 🎮 Program Showcase

<details>
<summary>🔧 <strong>Menu-Driven Array Operations</strong></summary>

```cpp
// Complete array management system
int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        cout << "\n---MENU---\n";
        cout << "1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. SEARCH\n6. EXIT\n";
        cin >> choice;
        
        switch (choice) {
            case 1: create(arr, n); break;
            case 2: display(arr, n); break;
            case 3: insert(arr, n); break;
            case 4: del(arr, n); break;
            case 5: lsearch(arr, n); break;
        }
    } while (choice != 6);
}
```

</details>

<details>
<summary>🥞 <strong>Stack Implementation</strong></summary>

```cpp
// Professional Stack class with all operations
class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack() : top(-1) {}
    
    void push(int val) {
        if (!isFull()) arr[++top] = val;
    }
    
    int pop() {
        return isEmpty() ? -1 : arr[top--];
    }
    
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_SIZE - 1; }
};
```

</details>

<details>
<summary>🔗 <strong>Linked List Magic</strong></summary>

```cpp
// Elegant linked list operations
struct Node {
    int data;
    Node* next;
};

// Find middle using two-pointer technique
int findMid(Node* head) {
    Node* slow = head;
    Node* fast = head;
    
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow->data;
}
```

</details>

## 🏆 Key Features

<div align="center">

| Feature | Description | Status |
|---------|-------------|---------|
| 🎨 **Clean Code** | Well-structured, readable implementations | ✅ |
| 📖 **Documentation** | Comprehensive comments and explanations | ✅ |
| ⚡ **Optimized** | Efficient algorithms with best practices | ✅ |
| 🧪 **Tested** | Thoroughly tested with various inputs | ✅ |
| 📊 **Analysis** | Time/space complexity documentation | ✅ |
| 🔍 **Interactive** | Menu-driven programs for easy testing | ✅ |

</div>

## 🛠️ Technologies Used

<div align="center">

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Git](https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)
![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)

</div>

## 📚 Learning Resources

<div align="center">

| Resource | Link | Description |
|----------|------|-------------|
| 🎯 **Visualizations** | [VisuAlgo](https://visualgo.net/) | Interactive algorithm visualizations |
| ⏰ **Big O Guide** | [Big O Cheat Sheet](https://www.bigocheatsheet.com/) | Complexity reference |
| 📖 **C++ Reference** | [CPP Reference](https://en.cppreference.com/) | Complete C++ documentation |
| 🧠 **Practice** | [LeetCode](https://leetcode.com/) | Coding interview preparation |

</div>

## 🤝 Contributing

<div align="center">
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif" width="100%">
</div>

We welcome contributions! Please check our [Contributing Guidelines](CONTRIBUTING.md) for details.

**How to Contribute:**
1. 🍴 Fork the repository
2. 🌿 Create a feature branch (`git checkout -b feature/amazing-feature`)
3. 💍 Commit changes (`git commit -m 'Add amazing feature'`)
4. 📤 Push to branch (`git push origin feature/amazing-feature`)
5. 🔄 Open a Pull Request

## 📜 License

<div align="center">

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge)](https://opensource.org/licenses/MIT)

</div>

## 👨‍💻 Author

<div align="center">
<img src="https://readme-typing-svg.herokuapp.com?font=Fira+Code&pause=1000&color=36BCF7&center=true&vCenter=true&width=435&lines=Made+with+💝+by+Abhinav+Kumar+Singh;Data+Structures+Enthusiast" alt="Author" />

<br>

**Abhinav Kumar Singh**

[![GitHub](https://img.shields.io/badge/GitHub-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)](https://github.com/abhinav29102005)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-%230077B5.svg?style=for-the-badge&logo=linkedin&logoColor=white)](https://linkedin.com/in/bigboyaks)
[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:asingh3_be24@thapar.edu)

</div>

## 🙏 Acknowledgments

<div align="center">

**Special Thanks To:**
- 👩‍🏫 **Course Instructor**: Dr. Rajendra Kumar Roul
- 🏫 **Institution**: TIET, Patiala  
- 📚 **Course**: UCS301 - Data Structures
- 🌟 **Community**: Fellow students and teachers

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif" width="100%">

</div>

<div align="center">

**⭐ Star this repository if you found it helpful!**

<img src="https://readme-typing-svg.herokuapp.com?font=Orbitron&weight=900&size=20&duration=3000&pause=1000&color=FFD700&center=true&vCenter=true&repeat=false&width=400&lines=Happy+Coding!+🚀✨" alt="Happy Coding" />



</div>

---

<div align="center">
<sub>Built with ❤️ using C++ • © 2025 Abhinav Kumar Singh</sub>
</div>
