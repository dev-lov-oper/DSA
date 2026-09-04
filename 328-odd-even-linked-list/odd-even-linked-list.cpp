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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return head;
        }

        ListNode *odd= new ListNode(0);
        ListNode *even=new ListNode(0);

        ListNode *oddp=odd;
        ListNode *evenp=even;
        int count=1;
        while(head!=NULL){
           if(count%2!=0){
            oddp->next=head;
            oddp=oddp->next;
           }
           else{
            evenp->next=head;
            evenp=evenp->next;
           }
           head=head->next;
           count++;
        }
        oddp->next=even->next;
        evenp->next=NULL;

        return odd->next;
    }
};