#include<iostream>
using namespace std;
class node{
public:
int data;
node *next,*front=NULL,*rear=NULL;
void insert(int n){
node *t=new node;
t->data=n;
t->next=NULL;
if(front==NULL){
front=t;
rear=t;
}
else{
front->next=t;
front=front->next;
}
}
void delete1(){
if(rear!=NULL){
node *t=rear;
rear=rear->next;
delete t;
}
else{
cout<<"queue underflow";
}
}
void print(){
node*p;
node *t=rear;
node *s=t->next;
while(t){
if(s->data%t->data!=0){
    node *p=t;
}
else{
    delete p;
}
t=t->next;
s=s->next;
}
p=rear;
while(t){
cout<<p->data<<' ';
p=p->next;
}
}
};

int main(){
node q;
q.insert(4);
q.insert(5);
q.insert(6);
q.insert(3);
q.insert(5);
q.print();
cout<<endl;

}

