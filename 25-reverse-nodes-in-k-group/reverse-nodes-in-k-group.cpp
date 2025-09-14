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
    int leng(ListNode* head){
        if(head==NULL) return 0;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(head==NULL){
            return NULL;
        }
        int len=leng(head);// everytime we check the length 
        if(k>len){
            return head;
        }
       
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* forward=curr->next;
        int cnt=0;
        while(cnt<k){
             forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            cnt++;
        }
        if(forward!=NULL){
            head->next=reverseKGroup(forward,k);
        }
        return prev;
    }
};