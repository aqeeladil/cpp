// https://www.codingninjas.com/studio/problems/reverse-the-singly-linked-list_799897?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan

// Iterative Solution

#include<iostream>
#include<map>
using namespace std;

Node* reverseLinkedList(Node *head){

    if(head == NULL || head -> next == NULL){
        return head
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
    
}


// Time complexity - O(N)
// Space complexity - O(1)


