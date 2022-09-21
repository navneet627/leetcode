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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
         ListNode *slow=head;
         ListNode *fast=head;
         while(slow!=NULL && fast!=NULL){
             slow=slow->next;
             fast=fast->next;
             if(fast!=NULL){
                 fast=fast->next;
             }
             if(slow==fast){
                 break;
             }
         }
        if(slow==NULL || fast==NULL){
            return NULL;
        }
        while(head!=slow){
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
};