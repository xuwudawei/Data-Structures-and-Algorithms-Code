#include<iostream>
using namespace std;
class node{
public:
int data;
int sum=1;
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
while(t){
cout<<t->data<<' ';
if(t->data%2!=0){
    sum=sum*t->data;
}
t=t->next;
}
cout<<endl;
cout<<sum<<endl;
}

};

int main(){
node q;
q.insert(1);
q.insert(2);
q.insert(3);
q.insert(4);
q.insert(5);
q.print();
// cout<<endl;
// q.delete1();
// q.delete1();
// q.delete1();
// q.delete1();
// q.print();
}