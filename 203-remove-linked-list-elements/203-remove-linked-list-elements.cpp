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
    void del(ListNode* &head, int val){
        if(head==NULL){
            return;
        }
        
            if(head->val==val){
               ListNode *temp=head;
                head=head->next;
                delete(temp);
                del(head,val);
                
            }
            else{
                del(head->next,val);
            }
            
            
            
            
        
        
        
        
        
        
        
    }
    ListNode* removeElements(ListNode* head, int val) {
        del(head,val);
        return head;
        
    }
};