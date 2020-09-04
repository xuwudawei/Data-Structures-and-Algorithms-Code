#include <iostream>
using namespace std;

struct node{
int data;
node *next;
node *prev;
};

node *head=NULL;
node *tail=NULL;

void add(int n){
node *t =new node;
t->data=n;
t->next=NULL;
if(head==NULL){
head=t;
tail=t;
}
else{
t->next=head;
head=t;
t->next->prev=t;
}
}

void sort(){
node *t=new node;
t=tail;
for(;t->prev!=NULL;t=t->prev){
for(node *j=t->prev;j!=NULL;j=j->prev){
if(t->data>j->data){
int temp = t->data;
t->data=j->data;
j->data=temp;
}
}
}
}

void print(){
node *t=new node;
t=tail;
while(t){
cout<<t->data<<" ";
t=t->prev;
}
}

int main(){
add(5);
add(24);
add(19);
add(2);
add(53);
sort();
print();
}