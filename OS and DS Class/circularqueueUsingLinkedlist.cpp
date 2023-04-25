#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class CircularQueue {
private:
    Node* front;
    Node* rear;
    int size;
public:
    CircularQueue() {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    bool isEmpty() {
        return (front == NULL);
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = newNode;
        } else {
            rear->next = newNode;
        }
        rear = newNode;
        rear->next = front;
        size++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        if (front == rear) {
            front = NULL;
            rear = NULL;
        } else {
            front = front->next;
            rear->next = front;
        }
        delete temp;
        size--;
    }

    int frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }

    int rearElement() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return rear->data;
    }

    int getSize() {
        return size;
    }
};

int main() {
    CircularQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "Front element: " << q.frontElement() << endl;
    cout << "Rear element: " << q.rearElement() << endl;
    cout << "Size: " << q.getSize() << endl;

    q.dequeue();
    q.dequeue();

    cout << "Front element: " << q.frontElement() << endl;
    cout << "Rear element: " << q.rearElement() << endl;
    cout << "Size: " << q.getSize() << endl;

    return 0;
}