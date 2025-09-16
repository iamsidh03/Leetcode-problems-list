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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ansHead=NULL,*ansTail=NULL;
        int carry=0;
        while(l1 && l2){
            int sum=carry+l1->val+l2->val;
            int digit=sum%10;
            carry=sum/10;
            ListNode* newNode=new ListNode(digit);
            if(!ansHead){
                ansHead=ansTail=newNode;
            }else{
                ansTail->next=newNode;
                ansTail=newNode;
            }
            l1=l1->next;
            l2=l2->next;

        }
        while(l1){
            int sum=carry+l1->val;
            int digit=sum%10;
            carry=sum/10;
            ListNode* newNode=new ListNode(digit);
            if(!ansHead){
                ansHead=ansTail=newNode;
            }else{
                ansTail->next=newNode;
                ansTail=newNode;
            }
            l1=l1->next;
           
        }

        while(l2){
             int sum=carry+l2->val;
            int digit=sum%10;
            carry=sum/10;
            ListNode* newNode=new ListNode(digit);
            if(!ansHead){
                ansHead=ansTail=newNode;
            }else{
                ansTail->next=newNode;
                ansTail=newNode;
            }
             l2=l2->next;
        }

        while(carry){
            int sum=carry;
            int dig=sum%10;
            carry=sum/10;
            ListNode* newNode=new ListNode(dig);
            ansTail->next=newNode;
            ansTail=newNode;
        }
        return ansHead;
     }
    
};