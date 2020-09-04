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
node *t=rear;
int max=t->data;
int sum=0;
while(t){
if(t->data>max){
max=t->data;
}
t=t->next;
}

t=rear;
while(t){
sum=t->data+t->next->data;
if(sum<=max){
cout<<t->data<<t->next->data;
}
t=t->next;
}
}

};

int main(){
node q;
q.insert(12);
q.insert(7);
q.insert(4);
q.insert(10);
q.insert(9);
q.insert(11);
q.print();
cout<<endl;

}

