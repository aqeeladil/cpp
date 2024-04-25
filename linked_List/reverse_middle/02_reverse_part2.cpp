// Recursive Solution


#include<iostream>
#include<map>
using namespace std;

void reverse(Node* &head, Node* curr, Node* prev){

    //base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse (head, forward, curr);
    curr -> next = prev;
}

Node* reverseLinkedList(Node *head){

    Node* prev = NULL;
    Node* curr = head;
    reverse(head, curr, prev);

    return head;
}


// Time complexity - O(N)
// Space complexity - O(1)




