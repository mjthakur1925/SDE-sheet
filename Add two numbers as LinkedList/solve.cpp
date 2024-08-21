#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor with data and next node
    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data
    node(int data1) {
        data = data1;
        next = nullptr;
    }
};

node* AddLinkedlist(node* head1, node* head2) {
    node* dummyNode = new node(-1);
    node* current = dummyNode;
    node* temp1 = head1;
    node* temp2 = head2;
    int carry = 0;

    // Correctly enclosing the loop body with curly braces
    while (temp1 != nullptr || temp2 != nullptr) {
        int sum = carry; // Declare sum variable within the loop

        if (temp1) {
            sum += temp1->data;
        }
        if (temp2) {
            sum += temp2->data;
        }

        node* newNode = new node(sum % 10);
        carry = sum / 10;
        current->next = newNode;
        current = current->next;

        if (temp1) {
            temp1 = temp1->next;
        }
        if (temp2) {
            temp2 = temp2->next;
        }
    }

    if (carry) {
        node* newNode = new node(carry);
        current->next = newNode;
    }

    return dummyNode->next;
}

// Function to print the linked list
void printLinkedList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Example Linked Lists
    node* head1 = new node(1);
    head1->next = new node(3);
    head1->next->next = new node(5);

    node* head2 = new node(2);
    head2->next = new node(4);
    head2->next->next = new node(6);

    cout << "First sorted linked list: ";
    printLinkedList(head1);

    cout << "Second sorted linked list: ";
    printLinkedList(head2);

    node* mergedList = AddLinkedlist(head1, head2);

    cout << "Merged sorted linked list: ";
    printLinkedList(mergedList);

    return 0;
}
