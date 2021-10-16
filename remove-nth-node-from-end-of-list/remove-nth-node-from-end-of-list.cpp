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
        int h=0;
        ListNode* s=head;
        while(s){
            h++;
            s=s->next;
        }
        if(h==n){
            if(h==1)return NULL;
            else return head->next;
        }
        h=h-n;
        h--;
        s=head;
        while(h){
            h--;
            s=s->next;
        }
        s->next=s->next->next;
        return head;
    }
};