#include <iostream>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(slow != NULL && fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            printf("slow:%d fast:%d\n", slow->val, fast->val);
            if(slow == fast) return true;
        }
        return (fast == NULL || fast->next == NULL) ? false : true;
        return slow;
        
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
    cout << sol.hasCycle(head) << endl;
    return 0;
}