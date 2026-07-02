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
    void reverse(ListNode* head,int k){
        ListNode*curr=head;
        ListNode*prev=nullptr;
        while(k--){
            ListNode*nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;

        }
        return;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* left=head;
        ListNode* right;
        ListNode* prevLeft=nullptr;
        ListNode* res=nullptr;
        while(true){
            right=left;
            for(int i=0;i<k-1;i++){
                if(right==nullptr)
                break;
                right=right->next;
            }
            if(right){
                ListNode* nextLeft=right->next;
                reverse(left,k);
                if(prevLeft)
                prevLeft->next=right;
                prevLeft=left;
                if(res==nullptr)
                res=right;
                left=nextLeft;
            }
            else{
                if(prevLeft)
                prevLeft->next=left;
                if(res==nullptr)
                res=left;
                break;
            }
        }
        return res;
    }
};