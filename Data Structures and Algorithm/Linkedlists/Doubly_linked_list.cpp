#include <iostream>
struct Node
{
int data;
struct Node * next, *prev;
struct Node *head = NULL;
Node *tail=NULL;
void insertF(int n)
{
Node *t = new Node;
t->data=n;
t->next=NULL;
if (head == NULL)
{
head = t;
tail = t;
}
else
{
t->next = head;
head = t;
t->next->prev = t;
}
}
void insertB(int n)
{
Node *t = new Node;
t->data=n;
t->next=NULL;
if(tail->next == NULL)
{
tail->next = t;
tail = t;
}
}
void print(){
Node *t=head;
while(t){
std::cout<<t->data;
t=t->next;
}
}
};
int main() {
struct Node s;
int n,p;
std::cin>>n;
for(int i=0;i<n;i++){
std::cin>>p;
s.insertF(p);
}
s.print();
}