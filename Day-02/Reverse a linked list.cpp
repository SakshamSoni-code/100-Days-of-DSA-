#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node * next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

Node * takeInput() {
	int data;
	Node * head = NULL;
	Node * tail = NULL;

	while (cin >> data) {
		Node * newNode = new  Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = tail->next;
		}
	}
	return head;
}
void printLinkedList(Node * head) {
	Node * temp = head;
	while (temp != NULL) {
		cout << temp->data<<" ";
		temp = temp->next;
	}
}

Node * findMid(Node * head){
    if(head == NULL || head->next == NULL) return head;
    
    Node * slow = head;
    Node * fast = head->next;
    
    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node * merge(Node * head1 , Node * head2){
    
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1; 
    
    Node * fhead = NULL;
    Node * ftail = NULL;
    
    if(head1->data < head2->data){
        fhead=head1;
        ftail=head1;
        head1=head1->next;
    }
    else{
        fhead=head2;
        ftail=head2;
        head2=head2->next;
    }
    
    while(head1 != NULL && head2 != NULL){
        if(head1->data < head2->data){
            ftail->next = head1;
            ftail = head1;
            head1 = head1->next;
        }
        
        else{
            ftail->next = head2;
            ftail = head2;
            head2 = head2->next;
        }
        
    } 
    if(head1 != NULL){
        ftail->next = head1;
    }
    
    if(head2 != NULL){
        ftail->next = head2;
    }
    return fhead;
}

Node* mergeSort(Node *head) {
    //write your code here
    
    if(head == NULL || head->next == NULL) return head;
    
    // to find mid
    Node * mid = findMid(head);
    // create two parts
    Node * part1Head = head;
    Node * part2Head = mid->next;
    mid->next = NULL;
    
    Node * head1 = mergeSort(part1Head);
    Node * head2 = mergeSort(part2Head);
    
    return merge(head1,head2);   
}

int main() {
	Node * head = takeInput();
	head = mergeSort(head);
	printLinkedList(head);
}