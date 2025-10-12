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
 int len(ListNode* head){
        int cnt=0;
        while(head!=NULL){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int posFromEnd=len(head)-k;

        int i=0;
        ListNode* temp=head;
        ListNode* temp1=head;
        while(i<k-1){
            i++;
            temp=temp->next;
        }
        int j=0;
        
        while(j<posFromEnd){
            j++;
            temp1=temp1->next;
        }
        int value=temp->val;
        temp->val=temp1->val;
        temp1->val=value;

        return head;

    }
};