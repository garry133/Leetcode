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
    void reorderList(ListNode* node) {
    if(node==NULL||node->next==NULL){}
    else{
       ListNode *s=node,*f=node,*a=NULL,*l0,*l1;
    int p=0,g=0;
    while(s){
        s=s->next;
        p++;
    }
    g=p/2;
    s=node;
    while(g--){
        s=s->next;
        if(g>=1)
        f=f->next;
    }
    while(s){
        ListNode*k=s->next;
        s->next=a;
        a=s;
        s=k;
    }
    f->next=NULL;
    s=new ListNode();
    s->val=0;
    f=s;
    l0=node;l1=a;
    while(l0&&l1){
        f->next=l0;
        l0=l0->next;
        f=f->next;
        f->next=l1;
        l1=l1->next;
        f=f->next;
    }
    if(l0)
     f->next=l0;
     else if(l1)
     f->next=l1;
     node= s->next;
    } 
    }
    
};