// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *deleteDuplicates(ListNode *head)
{

    ListNode *previousNode = head;
    if (head == nullptr || head->next == nullptr)
    {
        return head;
    }
    ListNode *currentNode = head->next;
    while (1)
    {
        if (currentNode->val == previousNode->val)
        {
            ListNode *nextNode = currentNode->next;
            previousNode->next = currentNode->next;
        }
        else
        {
            previousNode = currentNode;
        }
        if (currentNode->next == nullptr)
        {
            break;
        }
        currentNode = currentNode->next;
    }
    return head;
}

int main()
{
    ListNode *head = new ListNode(1);
    ListNode *node2 = new ListNode(1);
    ListNode *node3 = new ListNode(1);

    head->next = node2;
    node2->next = node3;

    deleteDuplicates(head);

    ListNode *currentNode = head;

    while (currentNode != nullptr)
    {
        cout << currentNode->val << " ";
        currentNode = currentNode->next;
    }

    return 0;
}