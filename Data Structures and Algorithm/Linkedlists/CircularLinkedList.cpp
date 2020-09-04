#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *tail=NULL;
node *head=NULL;

void addNode(int data)
{
    node *n = new node;
    n->data = data;

    if (head == NULL) {
        head = n;
        tail = n;
    } else {
        tail->next = n;    // connects the nodes
        tail = tail->next; // moves the connecter to the t= last
    }
    tail->next = head;
}


/*
* Deletion of element from the list
*/
void removeNode(int value)
{
    // no elements
    if (head == NULL) {
        return;
    }

    node *n = head;
    node *prev = tail;

    // 1 element
    if(n == prev) {
        if(n->data == value) {
            delete n;
            head = tail = NULL;
        }
        return;
    }

    bool found = false;
    // search
    do {
        if(n->data == value) {
            found = true;
            break;
        }
        prev = n;
        n = n->next;
    } while (n != head);

    // no such element
    if(!found) {
        cout<<"No Such Element!"<<endl;
    }

    prev->next = n->next;
    if(n == head) {
        head = n->next;
    } else if(n == tail) {
        tail = prev;
    }
    delete n;
}

void displayList()
{
    if (head == NULL) {
        cout << "empty!" << endl;
        return;
    }

    node *n = head;

    do {
        cout << n->data << " ";
        n = n->next;
    } while (n != head);
    cout << endl;
}



int main()
{
    int l,j,k;
cout<<"\n\nEnter the size of the linked list:"<<endl;
cin>>l;
cout<<"Enter the elements of the linked list"<<endl;
for (int i=0;i<l;i++){
cin>>j;
addNode(j);
}
cout<<"Enter the particular node to be deleted:"<<endl;
cin>>k;
removeNode(k);
displayList();
    return 0;
}