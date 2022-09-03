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

struct Node* k_th_elem(struct Node* head, int k)
{
    struct Node* start = head;
    while(k)
    {
        start = start -> next;
        --k;
    }
    struct Node* ret = head;
    while(start->next)
    {
        ret = ret -> next;
        start = start -> next;
    }
    return ret;
} 

void printList(struct Node* node)
{
    while (node != NULL) {
        std::cout << node->data << " ";
        node = node->next;
    }
}

int main()
{
    struct Node* start = newNode(1);
    start->next = newNode(2);
    start->next->next = newNode(3);
    start->next->next->next = newNode(4);
    start->next->next->next->next = newNode(5);
    start->next->next->next->next->next = newNode(6);
    start->next->next->next->next->next->next = newNode(7);
    printList(start);
    std::cout << std::endl;
    printList(k_th_elem(start,4));
}