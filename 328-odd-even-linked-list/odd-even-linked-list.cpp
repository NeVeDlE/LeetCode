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
    ListNode* oddEvenList(ListNode* head) {
        if(!head||!head->next)return head;
    ListNode * odd_head=head;
       ListNode * even_head=head->next;
       ListNode * tmp_even=head->next;
       // cout<<"HNA"<<endl;
       while(1)
        {
            if(!even_head->next)
            {
                odd_head->next=tmp_even;
                even_head->next=nullptr;
                break;
            }
            odd_head->next=even_head->next;
            odd_head=odd_head->next;
            if(!odd_head->next)
            {
                odd_head->next=tmp_even;
                even_head->next=nullptr;
                break;
            }
            even_head->next=odd_head->next;
            even_head=even_head->next;
        }
        return head;

    }
};