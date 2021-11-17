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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* ans=head;
        ListNode* a=head;
        int j=1;
        while(a&&j){
           ListNode* b=a,*p,*pp;
           int k=j;
            int l=0;
           while(a&&k){
               if(j%2!=0&&k>=1)p=a;
               if(j%2==0&&l==0){pp=a;l=1;}
               a=a->next;
               k--;
           }
           if(k!=0){
               if(j%2!=0)p=pp;
               j=j-k;
           }
           if(j%2==0){
               k=j;
                ListNode* r=a;
               while(b&&k){
                   ListNode* s=b->next;
                    b->next =r;
                    r=b;
                    b=s;
                   k--;
               }
               p->next=r;
           }
            j++;
        }
        return ans;
    }
};