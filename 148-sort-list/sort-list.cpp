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
    ListNode* findMiddle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* mergesort(ListNode* list1,ListNode* list2){
        ListNode* dummy =new ListNode(0);
        ListNode* temp=dummy;
        while(list1 && list2){
            if(list1->val <list2->val){
                temp->next=list1;
                list1=list1->next;
                temp=temp->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
                temp=temp->next;
            }
        }
        while(list1){
            temp->next=list1;
                list1=list1->next;
                temp=temp->next;
        }
        while(list2){
            temp->next=list2;
                list2=list2->next;
                temp=temp->next;
        }
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* middle=findMiddle(head);
        ListNode* right=middle->next;
        middle->next=nullptr;
        ListNode* left=head;
        left=sortList(left);
        right=sortList(right);
        return mergesort(left,right);

    }
};