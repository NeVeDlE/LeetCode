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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
        ListNode* tmp=head;
        while(tmp){
            tmp=tmp->next;
            cnt++;
        }
        tmp=head;
        cnt/=2;
        while(cnt--){
        tmp=tmp->next;
        }
        return tmp;
    }
};