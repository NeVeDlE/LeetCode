/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node->next)cout<<node->next->val<<endl;
       if(node->next){node->val=node->next->val;
       node->next=node->next->next;
       }
       else node=nullptr;
    cout<<node->val<<endl;
     
    }
};