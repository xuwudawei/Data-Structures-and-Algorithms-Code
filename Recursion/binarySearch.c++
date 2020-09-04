#include<iostream>
using namespace std;

int main(){
    int n,a[10],search;
    cout<<"Enter the total number of elements: ";
    cin>>n;
    cout<<"Enter each element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the search element:";
    cin>>search;
    int s=0,e=n-1;
    int mid=(s+e)/2;
    while(s<e){

        if(a[mid]==search){
            cout<<"Element found at position: "<<mid+1<<endl;
            break;
        }
        else if(a[mid]<search) {
            s=mid;
            mid=(s+e)/2;
        }
        else{
            e=mid;
            mid=(s+e)/2;
        }

    }
}