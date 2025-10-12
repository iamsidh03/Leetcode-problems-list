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
        ListNode* l1=list1;
        ListNode* l2=list2;

        ListNode* newNode= new ListNode(-1); //dummy Node
        ListNode* NewHead=newNode;
        ListNode* temp=newNode;
        while(l1 && l2 ){
            if(l1->val<=l2->val){
                ListNode* node=new ListNode(l1->val);
                temp->next=node;
                temp=node;
                l1=l1->next;
            }else{
                temp->next=new ListNode(l2->val);
                temp=temp->next;
                l2=l2->next;
            }
        }
        while(l1){
             temp->next=new ListNode(l1->val);
                temp=temp->next;
            l1=l1->next;
        }
        while(l2){
             temp->next=new ListNode(l2->val);
                temp=temp->next;
                l2=l2->next;
        }
        return NewHead->next;
    }
};