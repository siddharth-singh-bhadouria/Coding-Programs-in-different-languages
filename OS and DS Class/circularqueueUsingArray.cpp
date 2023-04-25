#include<iostream>
using namespace std;

#define MAX_SIZE 100 

class CircularQueue {
    int front; 
    int rear; 
    int arr[MAX_SIZE];

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return ((rear + 1) % MAX_SIZE == front);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Error: Circular queue is full\n";
            return;
        }
        else if (isEmpty()) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Error: Circular queue is empty\n";
            return;
        }
        else if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % MAX_SIZE;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Error: Circular queue is empty\n";
            return -1;
        }
        return arr[front];
    }
};

int main() {
    CircularQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.peek() << "\n"; // Output: 1
    q.dequeue();
    cout << q.peek() << "\n"; // Output: 2
    q.dequeue();
    q.dequeue();
    q.dequeue(); // Output: Error: Circular queue is empty
    return 0;
}