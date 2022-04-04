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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp1=head;
        ListNode *temp2=head;
         ListNode *temp3=head;
        int n=0;
        while(temp1){
            n++;
            temp1=temp1->next;
        }
        for(int i=0;i<k-1;i++){
            temp2=temp2->next;
            
        }
         for(int i=0;i<n-k;i++){
            temp3=temp3->next;
            
        }
        int s=temp2->val;
        temp2->val=temp3->val;
        temp3->val=s;
        
        return head;
        
    }
};