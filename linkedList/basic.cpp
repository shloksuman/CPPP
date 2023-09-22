#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


  ListNode* merge(ListNode* list1, ListNode* list2){
   

  }

  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){

  }

int main(){

    ListNode* h1 = NULL;
    ListNode* h2 = NULL;
    int arr1[] = { 1 , 4 , 5 ,7 } ;
    int arr1[] = { 2 , 3 , 6 } ;
    for(int i=0; i<4;i++){
        insertAtTail(head1, arr1[i]);
    }
    for( int i=0 ; i<3 ; i++ ){
        insertAtTail(head2, arr2[i]);
    }

    display(head1) ;
    display(head2) ;

    ListNode* newhead = merge(h1 , h2);
    display(newhead);

    return 0;

}