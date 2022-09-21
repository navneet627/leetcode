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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* var=head;
        for(int i=0;i<k;i++){
            if(var==NULL){
                return head;
            }
            var=var->next;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nxt=NULL;
        for(int i=0;i<k;i++){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        
       head->next=reverseKGroup(curr,k);
      return prev;

        
    }
};