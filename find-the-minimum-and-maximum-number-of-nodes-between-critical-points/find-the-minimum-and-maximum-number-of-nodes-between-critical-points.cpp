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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        if(!head||!head->next||!head->next->next){
            return {-1,-1};
        }
        int a=head->val,b=0;
        head=head->next;
        while(head&&head->next){
            b++;
            if((a>head->val&&head->val<head->next->val)||(a<head->val&&head->val>head->next->val)){
                ans.push_back(b);
            }
            a=head->val;
            head=head->next;
        }
        if(ans.size()<=1){
            return {-1,-1};
        }
        a=INT_MAX;
        b=ans[ans.size()-1]-ans[0];
        for(int i=1;i<ans.size();i++){
            a=min(a,ans[i]-ans[i-1]);
        }
          return {a,b};
    }
};