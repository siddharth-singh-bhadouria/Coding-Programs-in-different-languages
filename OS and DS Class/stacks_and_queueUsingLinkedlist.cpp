#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        Node* temp = top;
        top = top->next;
        int popped = temp->data;
        delete temp;
        return popped;
    }

   
};

class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty() {
        return front == NULL && rear == NULL;
    }

    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        Node* temp = front;
        int dequeued = temp->data;
        if (front == rear) {
            front = NULL;
            rear = NULL;
        } else {
            front = front->next;
        }
        delete temp;
        return dequeued;
    }

   
};

int main() {
    
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.pop() << endl; // Output: 3
    cout << s.pop() << endl; // Output: 2
    cout << s.pop() << endl; // Output: 1

    
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << endl; // Output: 1
    cout << q.dequeue() << endl; // Output: 2
    cout << q.dequeue() << endl; // Output: 3

    return 0;
}