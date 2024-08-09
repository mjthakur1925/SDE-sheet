#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node {
public:
int data;
node *next;
node(int data1 , node*next1){
    data = data1;
    next = next1;
}
node(int data1){
    data = data1;
    next = nullptr;
}
};
//Bruteforce
//function to convert linkedlist to array
/*node* ConvertLinkedlist(vector<int> & arr){
    node *dummyNode = new node (-1);
    node *temp = dummyNode;
    for( int i =0; i< arr.size();i++){
temp->next =new node(arr[i]);
temp = temp->next;
    }
    return dummyNode->next;
}
 //function to merged 
 node* merge(node* head1, node* head2) {
   vector<int>arr;
   node* temp1 = head1;
   node* temp2 = head2;
   while(temp1!= NULL){
    arr.push_back(temp1->data);
    temp1 = temp1->next;
   }
    while(temp2!= NULL){
    arr.push_back(temp2->data);
    temp2 = temp2->next;
 }
 sort(arr.begin(), arr.end());
 
 //function to convert array to list
node * head = ConvertLinkedlist(arr);
return head;
 }*/
//TC:O(N1 + N2) + O(N log N) + O(N) 
//SC: O(N1 + N2) + O(N)


//-----------------------------------------------------------------------------------------------------------------------------


//Optimized
//function to merge
node* merge(node* head1, node* head2) {
  node *dummyNode = new node (-1);
    node *temp = dummyNode;
    while(head1!=NULL && head2!=NULL){
        if(head1->data <= head2->data){
            temp->next = head1;
            head1 = head1->next;
            temp = temp ->next;
        }
        else{
            temp->next = head2;
            head2 = head2->next;
            temp = temp ->next;
  }
  if(head1!=NULL){
    temp->next = head1;
    }
     else{
        temp->next = head2;
     }  
}
return dummyNode->next;
}
 //Time Complexity: O(N1+N2)
 //Space Complexity: O(1)


// Function to print the linked list
void printLinkedList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        // Print the data of the current node
        cout << temp->data << " "; 
        // Move to the next node
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

    node* mergedList = merge(head1, head2);

    cout << "Merged sorted linked list: ";
    printLinkedList(mergedList);

    return 0;
}