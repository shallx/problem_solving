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

void listToLinkInsertion(ListNode* node, int* arr, int size);
void listToLinkInsertion(ListNode* node, int* arr, int size);
void LinkedListPrinter(ListNode *root);

class Solution {
public:
    vector<int> linkedListToNumber(ListNode* root){
        // int num = 0,multiplier = 1;
        // for(ListNode* iteratorNode = root; iteratorNode != nullptr; iteratorNode = iteratorNode->next){
        //     num += iteratorNode->val * multiplier;
        //     multiplier *= 10;
        // }
        // return num;
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
        for(int i=1; i<=nMax; i++){
            int sum = remaining;
            if(i < n1) sum += v1[n1-i];
            if(i < n2) sum += v2[n2-i];
            printf("v[%d]: %d | v[%d]: %d | sum:%d\n", n1-i, v1[n1-i], n2-i,v2[n2-i], sum % 10);
            node->next = new ListNode(sum % 10);
            node = node->next;
            remaining = sum / 10;
        }
        printf("\n");

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
    ListNode* list1 = new ListNode(2);
    int arr1[] = {2,4,3};
    listToLinkInsertion(list1, arr1, 3);

    ListNode* list2 = new ListNode(5);
    int arr2[] = {5,6,4};
    listToLinkInsertion(list2, arr2, 3);

    Solution sol = Solution();
    ListNode* resultNode = sol.addTwoNumbers(list1,list2);

    LinkedListPrinter(resultNode);
    return 0;
}

void listToLinkInsertion(ListNode* node, int* arr, int size){
    ListNode* iteratorNode = node;
    for(int i = 1; i < size; i++){
        ListNode* tempNode = new ListNode(arr[i]);
        iteratorNode->next = tempNode;
        iteratorNode = iteratorNode->next;
    }


}

void LinkedListPrinter(ListNode *root){
    ListNode* iteratorNode = root;
    while(iteratorNode != nullptr){
        cout << iteratorNode->val << " ";
        iteratorNode = iteratorNode->next;
    }
    cout << endl;
}

