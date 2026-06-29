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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        int pos=1;
        if(left==right){
            return head;
        }
        if(head==nullptr){
            return nullptr;
        }
        ListNode* before=nullptr;
        while(pos<left){
            before=temp;
            temp=temp->next;
            pos++;
        }
        ListNode* curr=temp;
        ListNode*prev=nullptr;
        int total=right-left+1;
      
        while(total--){
            ListNode*nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
          
             }
             temp->next=curr;
             if(before){
                before->next=prev;
             return head;
             }
             else{
                return prev;
             }
             
    }
};