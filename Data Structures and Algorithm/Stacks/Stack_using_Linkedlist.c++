#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};

class stack{
public:
node *sp;
stack(){
sp = NULL;
}
void push();
void pop();
void print();
};

void stack::push(){
node *t=new node;
cout<<"Element"<<endl;
cin>>t->data;
t->next=sp;
sp=t;
}

void stack::pop(){
if(sp!=NULL){
node *t =sp;
sp=sp->next;
cout<<t->data<<" is deleted"<<endl;
delete t;
}
else{
cout<<"Stack underflow"<<endl;
}
}

void stack::print(){
node *t=sp;
while(t){
cout<<t->data<<endl;
t=t->next;
}
}

int main(){
stack s;
s.push();
s.push();
s.print();
s.pop();
s.pop();
s.pop();
}