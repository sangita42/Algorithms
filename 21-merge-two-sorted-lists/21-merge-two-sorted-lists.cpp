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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
         if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        while(list1 && list2){
            if(list1->val<=list2->val){
                dummy->next=new ListNode(list1->val);
                list1=list1->next;
                
            }
            else{
                 dummy->next=new ListNode(list2->val);
                list2=list2->next;
                
            }
            dummy=dummy->next;
        }
        if(list1){
            dummy->next=list1;
            
        }
        if(list2){
            dummy->next=list2;
            
        }
        return temp->next;
        
    }
};