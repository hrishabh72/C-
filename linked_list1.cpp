#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // contructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void Insertathead(Node *&head, int d)
{
    // creating a new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertattail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertatposition(Node* &tail,Node *&head, int position, int d)
{
    if (position == 1)
    {
        Insertathead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last
    if (temp->next == NULL)
    {
        insertattail(tail,  d);
        return;
    }

    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

// traversing a linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created a new noode
    Node *node1 = new Node(10);
    //  cout<<node1->data<<" "<<endl;
    //  cout<<node1->next<<" "<<endl;

    // head pointed to node 1

    Node *head = node1;
    Node *tail = node1;

    print(head);
    insertattail(tail, 12);
    print(head);

    insertattail(tail, 15);
    print(head);

    insertatposition(tail,head, 4, 22);
    print(head);
}
