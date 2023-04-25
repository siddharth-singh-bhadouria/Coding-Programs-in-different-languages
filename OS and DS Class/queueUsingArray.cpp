#include<iostream>
using namespace std;

#define MAX_SIZE 100 
class Queue {
    int front; 
    int rear; 
    int arr[MAX_SIZE]; 

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Queue is full\n";
            return;
        }
        if (isEmpty()) {
            front++;
            rear++;
        }
        else {
            rear++;
        }
        arr[rear] = x;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Queue is empty\n";
            return;
        }
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Error: Queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.peek() << "\n"; // Output: 1
    q.dequeue();
    cout << q.peek() << "\n"; // Output: 2
    q.dequeue();
    q.dequeue();
    q.dequeue(); // Output: Error: Queue is empty
    return 0;
}