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
    ListNode* deleteDuplicates(ListNode* head) {
      if(!head)return head;
       ListNode* tmp=head;
      ListNode* dummy=new ListNode(0,tmp);
     
      ListNode* prev=dummy;
      while(tmp){
        if(tmp->next&&tmp->val==tmp->next->val){
            while(tmp->next&&tmp->val==tmp->next->val)tmp=tmp->next;
            prev->next=tmp->next;
        }
        else prev=tmp;
        tmp=tmp->next;

      }
      return dummy->next;
   
    }
};