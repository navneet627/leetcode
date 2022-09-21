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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* nxt=NULL;
        for(int i=0;i<2;i++){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }   
        
        head->next=swapPairs(curr);
        return prev;
        
        
        }
};