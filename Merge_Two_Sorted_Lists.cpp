#include <iostream>
#include <vector>

using namespace std;


struct ListNode{
int x;
ListNode* next;
ListNode(int v){
  x = v;
  next = nullptr;
}
};


ListNode* buildList(vector<int>& arr  ) {
    if (arr.empty()) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;

    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
};



ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* merged_node = new ListNode(-1);
        ListNode* head_node = merged_node;
       
        
        while(list1 && list2){
            if(list1->x < list2->x){
              merged_node->next = list1;
              merged_node = list1;
              list1 = list1->next;
            }
            else{
              merged_node->next = list2;
              merged_node = list2;
              list2 = list2->next;
            }
        }  
        
    if(list1){
        merged_node->next = list1;
    }
    else{
        merged_node->next = list2;
    }
        
return head_node->next;
}  




int main(int argc, char **argv){

  vector<int> arr = {1,5,7};
  vector<int> arr2 = {2,6,8};
  ListNode* List1 = buildList(arr);
  ListNode* List2 = buildList(arr2);
  
  ListNode* merged  = mergeTwoLists(List1 , List2);
  while(merged){
    cout<< merged->x << endl;
    merged = merged->next;
  }

  return 1;
}


