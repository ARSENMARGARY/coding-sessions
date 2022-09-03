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
 

void removeDuplicates(struct Node* start)
{
    struct Node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        while (ptr2->next != NULL) {
            if (ptr1->data == ptr2->next->data)
            {
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
        ptr1 = ptr1->next;
    }
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
    struct Node* start = newNode(10);
    start->next = newNode(12);
    start->next->next = newNode(11);
    start->next->next->next = newNode(11);
    start->next->next->next->next = newNode(12);
    start->next->next->next->next->next = newNode(11);
    start->next->next->next->next->next->next = newNode(10);
    printList(start);
    removeDuplicates(start);
    std::cout << std::endl;
    printList(start);
}