#include<iostream>
using namespace std;

struct Node 
{
    int data;
    Node *link;
};

void print_list(Node *n)
{
    while(n != NULL)
    {
        cout<< n->data<<endl;
        n = n->link;
    }
}
int main()
{
    Node *headPtr = NULL;
    Node *NEWnode;
    Node *Temp;

    NEWnode = new Node;
    headPtr = NEWnode;
    NEWnode->data = 12;

    Temp = NEWnode;
    NEWnode = new Node;
    NEWnode->data = 14;
    Temp->link = NEWnode;
    Temp = Temp->link;

    NEWnode = new Node;
    NEWnode->data = 34;
    Temp->link = NEWnode;
    Temp = Temp->link;

    NEWnode = new Node;
    NEWnode->data = 67;
    Temp->link = NEWnode;
    Temp = Temp->link;

    NEWnode = new Node;
    NEWnode->data = 156;
    Temp = NEWnode;
    Temp = Temp->link;
    //NEWnode->link = NULL;

    print_list(headPtr);
}