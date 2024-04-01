#include<bits/stdc++.h>
using namespace std;

//  * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printLinkedList( ListNode* head){
    if(head == NULL){
        cout << "NULL" << endl;
    }

    while(head != NULL){
        cout << head->val << " " ;
        head = head->next;
    }
    cout << endl;

}

int main(){
    // Create a linked list: 1->2->3->4->5
    ListNode* head = new ListNode;
    head -> val = 1;
    ListNode* second = new ListNode;
    second->val = 2;
    head->next = second;
    
    cout << "Original LinkedList is: ";
    printLinkedList(head);
	cout<<endl;


    cout << "working!" << endl;
    cout << "another line added " << endl;

    return 0;
}