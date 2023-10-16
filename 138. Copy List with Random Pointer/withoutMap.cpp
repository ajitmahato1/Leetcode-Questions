/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
          if(head == 0) return 0;
          //step 1: clone A - A'
          Node* it = head;
          while(it){ // itrate over old head
               Node* clonedNode = new Node(it->val);
               clonedNode -> next = it->next;
               it->next = clonedNode;
               it = it->next->next;
          }
          //step 2: Assigned random links of A' with the help of old Node A
            it = head;
            while(it){
                 Node* clonedNode = it->next ;
                 clonedNode->random = it->random ? it->random->next : nullptr;
                 it = it->next->next;
            }

         // step 3 : Diatach A' from A
              it = head;
              Node* clonedHead =  it->next;
              while(it){
                   Node* temp = it-> next;
                   it->next = it->next->next;
                   if(temp->next){
                        temp->next = temp->next->next;
                   }
                   it = it->next;
              }
              
              return clonedHead;

    }
};