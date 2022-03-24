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
        ListNode *temp=head;
        ListNode* first=NULL;
        ListNode* next = NULL;
        while(temp){
            ListNode* start=temp;
            if(temp->val==val){
                 first=temp;
                temp=temp->next;
            }
            next=temp->next;
            if(first!=NULL){
                  first->next=next;
            }
            
        
            temp=next;
            
            
        }
        
        
        
    }
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=head;
        ListNode* first=NULL;
        ListNode* next = NULL;
        while(temp){
            if(temp->val==val){
                if(first==NULL){
                    head=head->next;
                    
                }
                else{
                first->next=temp->next;
                }
                
            }
            else{
                first=temp;
            }
            temp=temp->next;
            
            
            
        }
        return head;
        
    }
};