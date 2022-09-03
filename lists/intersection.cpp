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

Node *getIntersectionNode(Node *headA, Node *headB) {
        if(headA == nullptr || headB == nullptr)
        {
            return nullptr;
        }
        
        Node* temp_a = headA;
        Node* temp_b = headB;
        
        while(temp_a != temp_b)
        {
            temp_a = !temp_a ? headB : temp_a -> next;
            temp_b = !temp_b ? headA : temp_b -> next;
        }
        
        return temp_a;
        
    }