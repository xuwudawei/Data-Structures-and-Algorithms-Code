#include <iostream>
struct node
{
int data;
node *next;
node *head=NULL;
node *tail=NULL;
void circular(int n)
{
    node *t=new node;
    t->data=n;
    if(head==NULL){
        head=t;

        t->next=head;
    }
    else{
        tail=head;
        while(tail->next!=head){
            tail=tail->next;
        }
        tail->next=t;
        t->next=head;
    }
}
void print(){
node *p= head;
int pos=1;
//sum=sum+head->data;
do{
    std::cout<<p->data<<" ";
    //x=p;
    p=p->next;
    pos++;
}while(p!=head);
//sum=sum+x->data;
}
};
int main() {
struct node x;
int n,p,search;
std::cout<<'Enter the Size of the list: ';
std::cin>>n;
std::cout<<'Enter the elements of the list: ';
for(int i=0;i<n;i++){
    std::cin>>p;
    x.circular(p);
}
std::cout<<'Enter the element to be searched in the list: ';
std::cin>>search;
x.print();
}