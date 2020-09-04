#include<iostream>
using namespace std;

struct node{
char data;
node *next;
};

class stack{
public:
node *sp;int flag=0;
stack(){
sp = NULL;
}
void push(char c);
void pop();
void print();
};

void stack::push(char c){
node *t=new node;
//cout<<"Element"<<endl;
t->data=c;
t->next=sp;
sp=t;
}

void stack::pop(){
if(sp!=NULL){
node *t =sp;
sp=sp->next;
delete t;
}


}

void stack::print(){
node *t=sp;
while(t){

cout<<"Output: "<<t->data<<endl;
t=t->next;
}
}

int main(){
stack s;
char a;
int n;
cout<<"enter number of elements:\n";
cin>>n;
for(int i=0;i<n;i++){
cin>>a;
if(a=='b'){
s.pop();
}
else{
  s.push(a);
}
}
s.print();

}