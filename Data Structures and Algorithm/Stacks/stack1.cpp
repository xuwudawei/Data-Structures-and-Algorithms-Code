#include<iostream>


class stack{
    public:
    int arr[5],sp;
    int top,n;
    void pop();
    void push(int n);
    stack(){
        sp=-1;
        top=5;
    }
};

void stack::push(int n){
    if(sp>=top-1){
        std::cout<<"\nStack overflow";
    }
    else{
   
        arr[++sp]=n;
        std::cout<<n;
    }
}


void stack::pop(){
    if(sp<0){
        std::cout<<"\nStack underflow";
    }
    else{
        int t;
        t=arr[sp];
        --sp;
        std::cout<<"\nRemoved: "<<t;
    }
}


int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(6);
    s.push(6);
    s.push(6);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}

