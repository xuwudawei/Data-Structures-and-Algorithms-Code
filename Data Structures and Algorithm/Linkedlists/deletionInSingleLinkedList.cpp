#include <iostream>
#include <string>

using namespace std;


class Node{
public:
int data;
Node *next;
Node(int data){
this->data = data;
next = NULL;
}
};

class LinkedList{
private:
Node *header;
Node *tail;
int size;
public:
LinkedList(){
this->header = NULL;
this->tail = NULL;
size =0;
}
int getSize(){
return this->size;
}

void appendData(int data){
// Create a new node
Node *n = new Node(data);
// Case 1: Empty LinkedList
if(header==NULL){
header =n;
tail=n;
}
// Case 2: LinkedList not empty
else{
tail->next = n;
tail = n;
}
size++;
}

void removeFirstNode(){
if(header!=NULL){
if(size==1){
header = NULL;
tail = NULL;
}
else{
Node *temp = header;
header = header->next;
delete temp;
}
}
else{
cout<<"The list is already empty"<<endl;
}
size--;
}

void removeLastNode(){
if(header!=NULL){
if(size==1){
removeFirstNode();
}
else{
Node *previous = header;
Node *current = header->next;
while(current->next!=NULL){
previous = current;
current = current->next;
}
tail = previous;
previous->next =NULL;
delete current;
}
size--;
}
}

void toString(){
Node *temp = header;

while(temp!=NULL){
cout<<temp->data<<" ";
temp = temp->next;
}
}

void removeAt(int pos){
int trust = 1;
if(pos<=size && pos>0){
if(pos==size){
removeLastNode();
}
else if(pos==1){
removeFirstNode();
}
else{
// First traverse the list
Node *current = header;
Node *previous;
for(int i=1;i<pos;i++){
previous = current;
current = current->next;
}
previous->next = current->next;
delete current;
size--;
}
}
}


~LinkedList(){
Node *current = header->next;
Node *previous = header;
while(current->next!=NULL){
delete previous;
previous = current->next;
current = current->next;
}
}
};

int main(){
LinkedList myLinkedList;
int l,j,k;
cout<<"\n\n\nEnter the size of the linked list:"<<endl;
cin>>l;
cout<<"Enter the elements of the linked list"<<endl;
for (int i=0;i<l;i++){
cin>>j;
myLinkedList.appendData(j);
}
cout<<"Enter the position of the particular node to be deleted:"<<endl;
cin>>k;
myLinkedList.removeAt(k+1);
myLinkedList.toString();

}

