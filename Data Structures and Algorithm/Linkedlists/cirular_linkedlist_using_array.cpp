#include <iostream>
struct node
{
int value;
node * nextPtr;
node(int val)
{
value = val;
nextPtr = NULL;
}
};
node * LA(int * ptr, int arraySize)
{
node * nodePtr = NULL;
node * head = NULL;
node * tail = NULL;
for(int i = 0 ; i < arraySize; i++)
{
if(!nodePtr)
{
nodePtr = new node(*(ptr+i));
if(!head)
head = nodePtr;
if(tail)
tail->nextPtr = nodePtr;
}
tail = nodePtr;
nodePtr = nodePtr->nextPtr;
}
return head;
}
void deletelist(node * ptr)
{
if(ptr)
{
node * pNext = ptr->nextPtr;
delete ptr;
deletelist(pNext);
}
}
void print(node *ptr)
{
int p;
std::cout<<"enter where printing start";
std::cin>>p;
for(int i=0;i<p;i++){
ptr = ptr->nextPtr;
}
while(ptr != NULL)
{
std::cout<<ptr->value<<" ";
ptr = ptr->nextPtr;
std::cout<<std::endl;
}
}
int main()
{
int p;
std::cin>>p;
int arr[p];
for(int i=0;i<p;i++){
std::cin>>arr[i];
}
node * ptr = LA(arr, sizeof(arr)/sizeof(int));
print(ptr);
deletelist(ptr);
return 0;
}