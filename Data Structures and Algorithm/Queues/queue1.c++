#include<iostream>

class Queue{
    public:
        int f=-1,back=0;
        int arr[10],n,end=5;
        void enqueue(int n);
        void dequeue();
};


void Queue::enqueue(int n){
    if(f>end-1){
      std::cout<<"Queue overflow!\n";
    }
    else{
        arr[++f]=n;
        std::cout<<"Enqueued: "<<n<<"\n";
    }
}


void Queue::dequeue(){
    if(f<0){
        std::cout<<"Queue undeflow!\n";
    }
    else{
        int t;
        t=arr[back++];
        f--;
        std::cout<<"Dequeued: "<<t<<"\n";
    }
}

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(5);
    std::cout<<"\n";
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
}


