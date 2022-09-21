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
    bool hasCycle(ListNode *head) {
      /*  map<ListNode* ,bool>reach;
        ListNode* temp=head;
        while(temp !=NULL){
            if(reach[temp]==true){
                return true;
            }
            reach[temp]=true;
            temp=temp->next;
        }
        return false;*/
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=NULL && fast != NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            if(slow==fast){
                return true;
            }
        }
                 return false;

    }
};