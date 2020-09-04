#include<iostream> 
using namespace std; 
   
#define MAX_size 10    
class Deque 
{ 
int  array[MAX_size]; 
int  front; 
int  rear; 
int  size; 
public : 
Deque(int size) { 
front = -1; 
rear = 0; 
this->size = size; 
    }  
void  insertfront(int key); 
void  insertrear(int key); 
void  deletefront(); 
void  deleterear(); 
int  getFront(); 
int  getRear(); 
     
bool  isFull(){
return ((front == 0 && rear == size-1)||front == rear+1);    
    } 
bool  isEmpty(){
return (front == -1);  
    }
}; 
   
void Deque::insertfront(int key) 
{ 
if (isFull())  { 
cout << "Overflow!!\n" << endl; 
return; 
    } 
   
   
if (front == -1)  { 
front = 0; 
rear = 0; 
    } 
else if (front == 0)             
front = size - 1 ; 
else  
front = front-1; 
   
array[front] = key ;            
} 
 
void Deque ::insertrear(int key) 
{ 
if (isFull()) { 
cout << " Overflow!!\n " << endl; 
return; 
    } 
   
  
if (front == -1) { 
front = 0; 
rear = 0; 
    } 
else if (rear == size-1)              
rear = 0; 
else                         
rear = rear+1; 
   
array[rear] = key ;         
} 
   
void Deque ::deletefront() 
{ 
if (isEmpty()) 
   { 
cout << "Queue Underflow!!\n" << endl; 
return ; 
    } 
    
 if (front == rear) 
    { 
front = -1; 
rear = -1; 
    } 
else
         
if (front == size -1) 
front = 0; 
   
else 
front = front+1; 
} 
   
 
void Deque::deleterear() 
{ 
if (isEmpty()) 
    { 
cout << " Underflow!!\n" << endl ; 
return ; 
    } 
   
     
if (front == rear) 
    { 
front = -1; 
rear = -1; 
    } 
else if (rear == 0) 
rear = size-1; 
else
rear = rear-1; 
} 

int Deque::getFront() 
{ 
if (isEmpty())   { 
cout << " Underflow!!\n" << endl; 
return -1 ; 
    } 
return array[front]; 
} 
   

int Deque::getRear() 
{ 
if(isEmpty() || rear < 0)  { 
cout << " Underflow!!\n" << endl; 
return -1 ; 
    } 
return array[rear]; 
} 
   
int main() 
{ 
    Deque dq(5); 
cout << "Insert element 1,2,3,4,5 at rear end \n\n"; 
dq.insertrear(1); 
dq.insertrear(2); 
dq.insertrear(3); 
dq.insertrear(4); 
dq.insertrear(5); 
   
   
cout << "rear element of deque " << " " << dq.getRear() << endl; 
   
dq.deleterear(); 
dq.deleterear(); 
dq.deleterear(); 
dq.deleterear(); 
cout << "\nAfter deletion from rear end, rear = " << dq.getRear() << endl; 
   
cout << "\ninserting element  at front end "<<endl;
dq.insertfront(2); 
dq.insertfront(3);
dq.insertfront(4);
dq.insertfront(5);

   
cout << "\nfront element of deque " << " "
<< dq.getFront() << endl; 
   
dq.deletefront(); 
dq.deletefront(); 
dq.deletefront(); 
dq.deletefront(); 
   
cout << "\nAfter deletefront, front = " << dq.getFront() << endl; 
return 0; 
}