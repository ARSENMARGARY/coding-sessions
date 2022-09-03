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

void reverseStr(std::string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        std::swap(str[i], str[n - i - 1]);
}

int sum(struct Node* head1,struct Node* head2)
{
    struct Node* it1 = head1;
    struct Node* it2 = head2;
    std::string str1 = "";
    std::string str2 = "";
    while (it1 && it2)
    {
        str1 += std::to_string(it1 -> data);
        str2 += std::to_string(it2 -> data);
        it1 = it1 -> next;
        it2 = it2 -> next;
    }
    reverseStr(str1);
    reverseStr(str2);
    
    
    return std::stoi(str1) + std::stoi(str2);
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
    struct Node* first = newNode(7);
    first->next = newNode(1);
    first->next->next = newNode(6);
    struct Node* second = newNode(5);
    second->next = newNode(9);
    second->next->next = newNode(2);
    std::cout << sum(first,second);
}