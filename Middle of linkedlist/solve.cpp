                                
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// Node class represents a node in a linked list
class Node {
public:

    // Data stored in the node
    int data;  
    
     // Pointer to the next node in the list
    Node* next;     

    // Constructor with both data
    // and next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as
    // a parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node *MiddleLinkedList(Node *head) {
    // If the list is empty or has only
    // one element, return the head as
    // it's the middle.
    if (head == NULL || head->next == NULL) {
        return head;
    }

    Node* temp = head;
    int count = 0;

    // Count the number of nodes in the linked list.
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Calculate the position of the middle node.
    int mid = count / 2 + 1;
    temp = head;

    // Traverse to the middle node by moving
    // temp to the middle position.
    while (temp != NULL) {
        mid = mid - 1;

        // Check if the middle
        // position is reached.
        if (mid == 0){
            // break out of the loop
            // to return temp
            break;
        }
        // Move temp ahead
        temp = temp->next;
    }

    // Return the middle node.
    return temp;
}

//------------------------------------------------------------------------------------------------------------------------------------

//optimal sol
//TC:O(n/2)
//SC:O(1)
/*Node *MiddleLinkedList(Node *head){
    Node *slow = head ; 
    Node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
       
                slow = slow->next;
                fast = fast->next->next;
    }
    return slow;
}*/


int main() {
    // Create a linked list with
    // values 1, 3, 2, and 4
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(7);

    // Print the original linked list
   
  

     Node *findMiddle = MiddleLinkedList(head);
cout << "Middle Node: " << findMiddle->data << endl;

   

    return 0;
}

