// Anotheer Recursive Solution


#include<iostream>
#include<map>
using namespace std;

//it will return head of the reverse list
Node* reverse1(Node* head){

    if(head == NULL || head -> next == NULL){
        return head
    }

    Node* chotaHead = reverse1();

    head -> next -> next = head;
    head -> next = NULL;

    return chotaHead;

}

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

    return reverse1(head);
}


// Time complexity - O(N)
// Space complexity - O(1)



