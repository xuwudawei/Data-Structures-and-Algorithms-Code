//Binary Search Using Recursive Function

#include<iostream>
using namespace std;

void binarySearch(int low,int high,int key,int arr[]);

int main(){
    int key;
    int size;
    cout<<"\nEnter the size in the items: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter each and every item: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"\nEnter the element to be searched: ";
    cin>>key;
    binarySearch(0,size-1,key,arr);
}

void binarySearch(int low,int high,int key,int arr[]){
    if(low==high){
        if(arr[low]==key){
            cout<<"Key found at position: "<<low+1<<endl;
        }else{
            cout<<"The key does not exist !!"<<endl;
        }
    }
    else{
        int mid=(low+high)/2;
        if(key==arr[mid]){
            cout<<"Key found at position: "<<mid+1<<endl;
        }
        else if(key<arr[mid]){
            return binarySearch(low,mid-1,key,arr);
        }
        else{
            return binarySearch(mid+1,high,key,arr);
        }

    }

}