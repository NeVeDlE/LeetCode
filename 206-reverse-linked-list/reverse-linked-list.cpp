/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head||!head->next)return head;
     ListNode* prev=head;
     head=head->next;
         prev->next=nullptr;
     while(head){
          ListNode* tmp=head->next; //3
          head->next=prev;//1
          prev=head;
          head=tmp;
     }
     head=prev;
     return head;
    }
};