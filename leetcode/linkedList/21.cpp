#include <iostream>
#include <stdio.h>

using namespace std;

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* iteratorNode = head;
        while(1){
            if(list1 == nullptr && list2 == nullptr){
                break;
            }
            else if(list1 != nullptr && (list2 == nullptr || list1->val < list2->val)){
                iteratorNode->next = new ListNode(list1->val);
                iteratorNode = iteratorNode->next;
                list1 = list1->next;
            } else if(list2 != nullptr){
                iteratorNode->next = new ListNode(list2->val);
                iteratorNode = iteratorNode->next;
                list2 = list2->next;
            }
            
        }

        return head->next;

    }
};

int main()
{
    Solution sol = Solution();

    ListNode* node1 = new ListNode(1);
    ListNode* iteratorNode = node1;
    ListNode* tempNode = node1;
    int arr[3] = {1,2,4};
    for(int i = 1; i < 3; i++){
        tempNode = new ListNode(arr[i]);
        iteratorNode->next = tempNode;
        iteratorNode = iteratorNode->next;
    }

    ListNode* node2 = new ListNode(1);
    iteratorNode = node2;
    tempNode = node2;
    int brr[7] = {1,3,4};
    for(int i = 1; i < 3; i++){
        tempNode = new ListNode(brr[i]);
        iteratorNode->next = tempNode;
        iteratorNode = iteratorNode->next;
    }

    // iteratorNode = node2;
    // while(1){
    //     cout << iteratorNode->val << " ";
    //     if(iteratorNode->next == nullptr){
    //         break;
    //     }
    //     iteratorNode = iteratorNode->next;
        
    // }

    ListNode* newNode = sol.mergeTwoLists(node1, node2);
    iteratorNode = newNode;

    while(1){
        cout << iteratorNode->val << " ";
        if(iteratorNode->next == nullptr){
            break;
        }
        iteratorNode = iteratorNode->next;
        
    }
    
    return 0;
}