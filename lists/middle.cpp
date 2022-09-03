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


struct Node* middle(struct Node* head)
{
    struct Node* start = head;
    int count{};
    while (start && start ->  next)
    {
        start = start ->next;
        ++count;
    }
    struct Node* ret = head;
    count /= 2;
    while (count)
    {
        ret = ret -> next;
        count--;
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
    // start->next->next->next->next->next->next = newNode(7);
    printList(start);
    std::cout << std::endl;
    std::cout << middle(start);
}