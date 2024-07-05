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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }else{
            vector<int> values;
            ListNode* copia = new ListNode();
            ListNode* sol = copia;
            while(head!=NULL){
                values.push_back(head->val);
                head=head->next;
            }
            for(int i=values.size()-1;i>=0;i--){
                ListNode* nuevo= new ListNode();
                nuevo->val=values[i];
                copia->next=nuevo;
                copia=copia->next;
            }
            return sol->next;
        }
    }
};