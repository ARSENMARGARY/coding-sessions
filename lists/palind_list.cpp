#include <iostream>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
 
struct Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->next = nullptr;
    temp->prev = nullptr;
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

bool is_palindrome(struct Node* head)
{
    int count{};
    struct Node* sl = head;
    while (sl)
    {
        ++count;
        sl = sl->next;
    }
    if (count % 2 != 0)
    {
        struct Node* slow = middle(head);
        struct Node* fast = middle(head);
        while (fast && fast -> next)
        {
            if (slow -> data != fast -> data)
            {
                return false;
            }
            fast = fast->next;
            slow = slow->prev;
        }
    }
    else
    {
        struct Node* slow = middle(head);
        struct Node* fast = middle(head);
        if (fast->data != fast->next->data)
        {
            std::cout << "a";
            return false;
        }
        else
        {
            fast = fast->next;
            while (fast && fast -> next)
            {
                if (slow -> data != fast -> data)
                {
                    return false;
                }
                fast = fast->next;
                slow = slow->prev;
            }
        }
        
    }
    return true;
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
    // struct Node* start = newNode(1);
    // start->next = newNode(2);
    // start->next->prev = start;
    // start->next->next = newNode(3);
    // start->next->next->prev = start->next;
    // start->next->next->next = newNode(4);
    // start->next->next->next->prev = start->next->next;
    // start->next->next->next->next = newNode(3);
    // start->next->next->next->next->prev = start->next->next->next;
    // start->next->next->next->next->next = newNode(2);
    // start->next->next->next->next->next->prev = start->next->next->next->next;
    // start->next->next->next->next->next->next = newNode(1);
    // start->next->next->next->next->next->next->prev = start->next->next->next->next->next;
    struct Node* start = newNode(1);
    start->next = newNode(2);
    start->next->prev = start;
    start->next->next = newNode(3);
    start->next->next->prev = start->next;
    start->next->next->next = newNode(3);
    start->next->next->next->prev = start->next->next;
    start->next->next->next->next = newNode(2);
    start->next->next->next->next->prev = start->next->next->next;
    start->next->next->next->next->next = newNode(1);
    start->next->next->next->next->next->prev = start->next->next->next->next;

    std::cout << is_palindrome(start);
    std::cout << std::endl;
}