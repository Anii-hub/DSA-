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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
      
        
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        if(count==n){
            return head->next;
        }
        temp=head;
        for(int i=1;i<count-n;i++){
            temp=temp->next;
        }
        if(temp->next!=nullptr && temp->next->next!=nullptr){
             temp->next=temp->next->next;
        }
        else{
            temp->next=nullptr;
        }
       
        return head;
    }
};