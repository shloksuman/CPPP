#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next= NULL;
    }

  };

  void insertAtTail(node* &head, int val){

    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = n;
  }

  void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
  }


//   ListNode* merge(ListNode* list1, ListNode* list2){
   

//   }

  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){

  }

  node* merge(node* &p1 , node* &p2){
    //base case
    if(p1==NULL)return p2;
    if(p2==NULL)return p1;
    node* dummyNode = new node(-1);
    node* p3= dummyNode;

    while(p1!=NULL && p2!=NULL){
        if (p1 -> data < p2->data){
            p3->next= p1 ;
            p1=p1->next;
        }
        else {
            p3->next= p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    // while(p1!=NULL){
    //     p3->next= p1;
    //     p1=p1->next;
    //     p3=p3->next;
    // }
    // while(p2!=NULL){
    //     p3->next= p2;
    //     p2=p2->next;
    //     p3=p3->next;
    // }

    if(p1==NULL) p3->next = p2;
    else p3->next = p1;


    return dummyNode->next;

}

node* mergeRecursive(node* &head1, node* &head2){

    if(head1==NULL) return head2;
    if(head2==NULL) return head1;

    node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next ,head2);
    }
    else {
        result  = head2;
        result-> next =mergeRecursive(head1 ,head2->next );
    }
    return result;
}

int main(){

    // ListNode* h1 = NULL;
    // ListNode* h2 = NULL;
    node* h1 = NULL;
    node* h2 = NULL;
    int arr1[] = { 1 , 4 , 5 ,7 } ;
    int arr2[] = { 2 , 3 , 6 } ;
    for(int i=0; i < ( sizeof(arr1)/sizeof(arr1[0]) ) ; i++ ){
        insertAtTail(h1, arr1[i]);
    }
    for( int i=0 ; i<3 ; i++ ){
        insertAtTail(h2, arr2[i]);
    }

    display(h1) ;
    display(h2) ;

    // node* newhead = merge(h1 , h2);
    node* newhead = mergeRecursive(h1 , h2);

    display(newhead);


    return 0;

}