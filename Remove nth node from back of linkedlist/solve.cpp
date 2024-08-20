#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  class node {
    public:
    int data;
    node* next;
    node(int data1, node*next1){
        data=data1;
        next = next1;
    }

     node(int data1){
        data=data1;
        next = nullptr;
    }
  };
//bruteforce
// Function to delete the Nth node
// from the end of the linked list
node* RemoveNode(node* head, int N) {
    if (head == NULL) {
        return NULL;
    }
    int cnt = 0;
    node* temp = head;

    // Count the number of nodes in the linked list
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }

    // If N equals the total number of
    // nodes, delete the head
    if (cnt == N) {
        node* newhead = head->next;
        delete (head);
        return newhead;
    }

    // Calculate the position of the node to delete (res)
    int res = cnt - N;
    temp = head;

    // Traverse to the node just before the one to delete
    while (temp != NULL) {
        res--;
        if (res == 0) {
            break;
        }
        temp = temp->next;
    }

    // Delete the Nth node from the end
    node* delNode = temp->next;
    temp->next = temp->next->next;
    delete (delNode);
    return head;
}
//Time Complexity: O(L)+O(L-N)
//Space Complexity: O(1)




  //---------------------------------------------------------------------------------------------------------
  //Optimal solution
  /*node *RemoveNode( node *head ,int n){
    node*fast = head;
    for(int i =0;i<n;i++){
        fast = fast->next;
    }
    node *slow =head;
    if(fast->next !=NULL){
        slow = slow->next;
        fast =fast->next;
    }
    if(fast ==NULL){
        return head->next;
        free(head);
    }
    node *deleteNode = slow->next;
    slow->next = slow->next->next;
 free(deleteNode);
 return head;
  }*/


void printLinkedList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a linked list with
    // values 1, 3, 2, and 4
     vector<int> arr = {1, 2, 3, 4, 5};
    int n = 3;
   node* head = new node(arr[0]);
    head->next = new node(arr[1]);
    head->next->next = new node(arr[2]);
    head->next->next->next = new node(arr[3]);
    head->next->next->next->next = new node(arr[4]);


    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Reverse the linked list
 head = RemoveNode(head, n);

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);

   
}
//TC:O(N)
//SC:O(1)

