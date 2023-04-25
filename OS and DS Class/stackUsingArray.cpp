#include<iostream>
using namespace std;

#define max_size 100 

class Stack {
    int top; 
    int arr[max_size]; 

public:
    Stack() {
        top = -1;
    }

    
    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == max_size - 1);
    }

    void push(int x) {
        if (isFull()) {
            cout << "Error: Stack is full\n";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Error: Stack is empty\n";
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Error: Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peek() << "\n"; // Output: 3
    s.pop();
    cout << s.peek() << "\n"; // Output: 2
    s.pop();
    s.pop();
    s.pop(); // Output: Error: Stack is empty
    return 0;
}