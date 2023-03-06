struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    
        ListNode* previousNode = head;
        if( head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* i=head->next;
        while(1){
            if(i->val == previousNode->val){
                ListNode* nextNode = i->next;
                previousNode->next = i->next;
            }
            previousNode = i;
            if(i->next == nullptr){
                break;
            }
            i=i->next;
            
        }
        return head;
    }
};