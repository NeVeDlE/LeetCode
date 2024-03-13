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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* tmp1=list1;
       ListNode* tmp2=list2;
       ListNode* dummy=new ListNode(-1);
       if(!list1)return list2;
       if(!list2)return list1;
       dummy->next=list1;
         ListNode* ans=dummy;
       while(tmp2&&tmp1){
        if(tmp1->val<tmp2->val){
            dummy->next=tmp1;
            tmp1=tmp1->next;
            dummy=dummy->next;
        }
        else{
              dummy->next=tmp2;
            tmp2=tmp2->next;
            dummy=dummy->next;
        }
       }
      if(tmp1)dummy->next=tmp1;
      if(tmp2)dummy->next=tmp2;
       return ans->next;
     
    }
};