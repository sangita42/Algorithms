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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
        
        ListNode* head = new ListNode(0);
        ListNode *temp=head;
        if(lists.size()==0){
            return NULL;
        }
        for(int i=0;i<lists.size();i++){
            ListNode * li=lists[i];
            if(li){
            pq.push({li->val,li});
                }
        }
        
        while(!pq.empty()){
            int to = pq.top().first;
            ListNode* Ll=pq.top().second;
            pq.pop();
            temp->next=new ListNode(to);
            temp=temp->next;
            if(Ll->next){
                pq.push({Ll->next->val,Ll->next});
            }
            
            
            
        }
        return head->next;
        
        
    }
};