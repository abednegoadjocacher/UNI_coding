#include<iostream>
using namespace std;
class Node {
    public:
    int value;
    Node* next;
};

void printlist(Node *n)
{
    while(n != NULL)
    {
        cout<< n->value<<endl;
        n = n->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    //Assign values to the elements
    head->value = 1;
    head->next = second;//This is linking them together
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = NULL;

    printlist(head);

    return 0;
}