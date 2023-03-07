#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* listToLinkInsertion(vector<int> arr);
void LinkedListPrinter(ListNode *root);

class Solution {
public:
    vector<int> linkedListToNumber(ListNode* root){
        vector<int> v{};
        for(ListNode* it = root; it != nullptr; it = it->next){
            v.push_back(it->val);
        }
        return v;
    }
    void vectorIterator(vector<int> v){
        for(auto i: v){
            cout << i << " ";
        }
        cout << endl;
    }
    ListNode* numberToLinkedList(int num){
        ListNode* root = new ListNode(num%10);
        num /= 10;
        for(ListNode* node = root; num != 0; node = node->next){
            node->next = new ListNode(num%10);
            num /= 10;
        }
        return root;
    }

    ListNode* addVector(vector<int> v1, vector<int> v2){
        int n1 = v1.size();
        int n2 = v2.size();
        int remaining = 0;
        int nMin = min(n1,n2);
        int nMax = max(n1,n2);
        ListNode* root = new ListNode();
        ListNode* node = root;
        for(int i=0; i<nMax; i++){
            int sum = remaining;
            if(i < n1) sum += v1[i];
            if(i < n2) sum += v2[i];
            // printf("v[%d]: %d | v[%d]: %d | remain: %d | sum:%d\n", n1-i, v1[i], n2-i,v2[i],remaining, sum % 10);
            node->next = new ListNode(sum % 10);
            node = node->next;
            remaining = sum / 10;
        }
        if(remaining > 0){
            node->next = new ListNode(remaining);
        }
        // printf("\n");

        return root->next;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1 = linkedListToNumber(l1);
        vectorIterator(v1);
        vector<int> v2 = linkedListToNumber(l2);
        vectorIterator(v2);
        return addVector(v1,v2);
    }
};

int main(){
    // vector<int> arr1 = {2,4,9};
    // vector<int> arr2 = {5,6,4,9};
    vector<int> arr1 = {9,9,9,9,9,9,9};
    vector<int> arr2 = {9,9,9,9};
    ListNode* list1 = listToLinkInsertion(arr1);

    ListNode* list2 = listToLinkInsertion(arr2);

    Solution sol = Solution();
    ListNode* resultNode = sol.addTwoNumbers(list1, list2);

    LinkedListPrinter(resultNode);
    return 0;
}

ListNode* listToLinkInsertion(vector<int> arr){
    ListNode* root = new ListNode(arr[0]);
    ListNode* iteratorNode = root;
    for(int i = 1; i < arr.size(); i++){
        ListNode* tempNode = new ListNode(arr[i]);
        iteratorNode->next = tempNode;
        iteratorNode = iteratorNode->next;
    }
    return root;
}

void LinkedListPrinter(ListNode *root){
    ListNode* iteratorNode = root;
    while(iteratorNode != nullptr){
        cout << iteratorNode->val << " ";
        iteratorNode = iteratorNode->next;
    }
    cout << endl;
}

