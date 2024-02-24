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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* l1_head=l1;
        ListNode* l2_head=l2;
        int carry=0;
        ListNode* prev_l1=nullptr;
        while(1)
        {
        //    cout<<l1->val <<" "<<l2->val<<" "<<carry<<endl;
            if(l1_head)carry+=l1_head->val;
            if(l2_head)carry+=l2_head->val;
            if(!l1_head)
            {
                l1_head=new ListNode(carry%10);
                prev_l1->next=l1_head;
            }
            else l1_head->val=carry%10;
            if(carry/10>=1)carry=1;
            else carry=0;
            if(l1_head){
                prev_l1=l1_head;
                l1_head=l1_head->next;
            }
            if(l2_head)
                l2_head=l2_head->next;
            if(!l1_head&&!l2_head)break;
        }
        if(carry){
             l1_head=new ListNode(carry%10);
                prev_l1->next=l1_head;
        }
        return l1;
    }
};