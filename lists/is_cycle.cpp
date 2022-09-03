#include <iostream>


struct Node {
    int data;
    struct Node* next;
};
 
struct Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

bool hasCycle(Node *head) {
       if (head == NULL || head->next == NULL) {
            return false;
        } else {
            Node *slow = head, *fast = head->next;
            
            while (slow != fast) {
                if (fast == NULL || fast->next == NULL) {
                    return false;
                } else {
                    slow = slow->next;
                    fast = fast->next->next;
                }
            }
            return true;
        }


    