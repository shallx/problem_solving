#include <iostream>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        if((slow->next != NULL && slow->next->next != NULL) && slow->next == slow->next->next->next) return head;

        while(slow != NULL && fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            printf("slow:%d fast:%d\n", slow->val, fast->val);
            if(slow == fast){
                 slow = head;
                while(slow!=fast){
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            };
        }
        return NULL;
    }
};

int main(){
    Solution sol = Solution();
    ListNode* iterator = new ListNode(0);
    ListNode* head = new ListNode(3);
    iterator = head;
    ListNode* newNode = new ListNode(2);
    ListNode* cycleNode = newNode;
    head->next = newNode;
    iterator = newNode;
    newNode = new ListNode(0);
    iterator->next = newNode;
    iterator = newNode;
    newNode = new ListNode(-4);
    iterator->next = newNode;
    newNode->next = cycleNode;
    cout << sol.detectCycle(head)->val << endl;
    return 0;
}

ListNode* nodeInsertion(){

}