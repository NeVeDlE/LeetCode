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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* tmp=head;
        while(tmp->next){
            ListNode* div=new ListNode(__gcd(tmp->val,tmp->next->val));
            div->next=tmp->next;
            tmp->next=div;
            tmp=tmp->next;
            tmp=tmp->next;
        }
        return head;
    }
};