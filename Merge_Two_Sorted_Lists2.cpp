#include <iostream>
#include <vector>

using namespace std;

struct ListNode{

int x;
ListNode* next;

ListNode(int var){
  x =var;
  next =nullptr;
}

};


ListNode* arrToList(vector<int>& arr){
  
  vector<int>::iterator it = arr.begin();
  ListNode* tmp =new ListNode(-1);
  ListNode *head = tmp; 
  
     for(int i=0; i<arr.size() ; i++ ){
        tmp->x = *it;
        tmp->next = new ListNode(-1);
        tmp = tmp->next;

        it++;
  }
  
 tmp->next = nullptr;
 return head;
}



ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
  
  ListNode* merged = new ListNode(-1);
  ListNode* headMerged = merged;
    
  while(list1 && list2){
    if(list1->x < list2->x){
      
      merged->next =list1->next;
      merged = list1;
      list1 = list1->next;
    }
    else{
    merged->next =list2->next;
      merged = list2;
      list2 = list2->next;
    }
    
  }

  
  return headMerged;
  
}


void printList(ListNode* head){
  while(head){
    cout << head->x << endl;
    head = head->next;
  }
}



int main(int argc, char **argv){

ListNode* head1, *head2, *headMerged;

vector<int> arr1 = {1,3,7};
vector<int> arr2 = {2,6,8};

head1=arrToList(arr1);
head2=arrToList(arr2);

//headMerged = mergeTwoLists(head1, head2);

printList(head1);
//printList(headMerged);

/*
while(headMerged){
  cout << headMerged->x << endl;
  headMerged = headMerged->next;
} */
 



  return 1;
}


