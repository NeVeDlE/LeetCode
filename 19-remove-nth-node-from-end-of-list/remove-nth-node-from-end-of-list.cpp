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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev=nullptr;
        ListNode* tmp=head;
        int cnt=0;
        while(tmp){
            cout<<cnt<<endl;
            if(cnt==n){
                prev=head;
            }
            if(cnt>n){
                prev=prev->next;
            }
            tmp=tmp->next;
            cnt++;
        }
      // return prev;
        if(prev){
            if(!prev->next->next)prev->next=nullptr;
            else prev->next=prev->next->next;
        }
        else{
            if(head){
                if(head->next)head=head->next;
                else return nullptr;
            }
            else return nullptr;
        }
        return head;
      

    }
};