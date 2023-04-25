#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Tree {
private:
    Node* root;
public:
    Tree() {
        root = NULL;
    }

    void insert(int value) {
        Node* newNode = new Node(value);
        if (root == NULL) {
            root = newNode;
        } else {
            Node* temp = root;
            while (temp != NULL) {
                if (value < temp->data) {
                    if (temp->left == NULL) {
                        temp->left = newNode;
                        break;
                    } else {
                        temp = temp->left;
                    }
                } else {
                    if (temp->right == NULL) {
                        temp->right = newNode;
                        break;
                    } else {
                        temp = temp->right;
                    }
                }
            }
        }
    }

    void inorderTraversal(Node* root) {
        if (root == NULL) {
            return;
        }
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }

    void preorderTraversal(Node* root) {
        if (root == NULL) {
            return;
        }
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }

    void postorderTraversal(Node* root) {
        if (root == NULL) {
            return;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }

    Node* getMinValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != NULL) {
            current = current->left;
        }
        return current;
    }

    Node* deleteNode(Node* root, int value) {
        if (root == NULL) {
            return root;
        }
        if (value < root->data) {
            root->left = deleteNode(root->left, value);
        } else if (value > root->data) {
            root->right = deleteNode(root->right, value);
        } else {
            if (root->left == NULL) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == NULL) {
                Node* temp = root->left;
                delete root;
                return temp;
            }
            Node* temp = getMinValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    Node* getRoot() {
        return root;
    }
};

int main() {
    Tree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder Traversal: ";
    tree.inorderTraversal(tree.getRoot());
    cout << endl;

    cout << "Preorder Traversal: ";
    tree.preorderTraversal(tree.getRoot());
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.postorderTraversal(tree.getRoot());
    cout << endl;

    tree.deleteNode(tree.getRoot(), 20);
    cout << "Inorder Traversal After Deletion: ";
    tree.inorderTraversal(tree.getRoot());
    cout<<endl;
}