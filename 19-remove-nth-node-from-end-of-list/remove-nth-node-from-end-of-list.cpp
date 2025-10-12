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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int posFromFront=len(head)-n;
    if (posFromFront == 0) {
            ListNode* newHead = head->next;
            head->next = nullptr;
            delete head;
            return newHead;
        }
        ListNode* temp=head;
        int cnt=0;
        while(cnt<posFromFront-1){
            temp=temp->next;
            cnt++;
        }
        ListNode* deleteNode = temp->next;
        temp->next = deleteNode->next;
        deleteNode->next = nullptr;
        delete deleteNode;

        return head;
    }
};