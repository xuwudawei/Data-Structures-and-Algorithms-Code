#include <iostream>
struct node
{
int data;
node *next;
};
node *head=NULL;
node *tail=NULL;
void add(int n){
node *t=new node;
t->data=n;
t->next=NULL;
if (head==NULL)
{
head=t;
tail=t;
}
else{
tail->next=t;
tail=tail->next;
}
}
void sort()
{
node *t=new node;
t=head;
for(;t->next!=NULL;t=t->next)
{
for(node *j=t->next;j!=NULL;j=j->next)
{
if(t->data>j->data)
{
int temp= t->data;
t->data=j->data;
j->data=temp;
}
}

}
}
void print()
{
node *t=new node;
t= head;
while(t)
{
std::cout<<t->data;
t=t->next;
}
}

int main() {
add(5);
add(8);
add(9);
add(4);
sort();
print();
}