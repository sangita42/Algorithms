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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *cur=head;
        ListNode *res=cur;
        if(cur==NULL){
            return cur;
        }
        while(cur!=NULL){
            
            if(cur->next!=NULL&&cur->val==cur->next->val){

                cur->next=cur->next->next;
            }
                else{
                    cur=cur->next;
                    
                }
            
            
            
            
        }
        return res;
        
    }
};