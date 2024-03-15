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
    ListNode* rotateRight(ListNode* head, int k) {
     if(!head||!head->next)return head;
       ListNode* s=head;
     ListNode* prev=nullptr;
     int cnt=0;
     while(s){
      cnt++;
      s=s->next;
     }
     k=k%cnt;
     k=cnt-k;
     cnt=0;
     s=head;
     ListNode* start=nullptr;
   //  cout<<k<<endl;
     while(s){
        if(cnt==k){
            start=s;
            break;
        }
        cnt++;
        prev=s;
        s=s->next;
     }
     //return prev;
     while(start){
        if(start->next==nullptr){
            start->next=head;
        }
        if(start->next==prev){
            start=start->next;
            head=prev->next;
            start->next=nullptr;
            break;
        }
        start=start->next;
     }
     return head;

    }
};