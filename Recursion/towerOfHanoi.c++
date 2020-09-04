#include<iostream>

using namespace std;

void tower_Of_Hanoi(int n,char source,char destination,char intermediate);

int main(){
    int n;
    cout<<"\n<<<<<<<<<<< TOWER OF HANOI USING RECURSION >>>>>>>>>>>>\n";
    cout<<"Enter the total no. of disk to be moved: ";
    cin>>n;
    tower_Of_Hanoi(n,'S','D','I');
}

void tower_Of_Hanoi(int n,char source,char destination,char intermediate){
    if(n==1){
        cout<<"\nMove disk 1 from "<<source<<" rod to "<<destination<<" rod."<<endl;
    }
    else{
        tower_Of_Hanoi(n-1,source,intermediate,destination);
        cout<<"\nMove disk "<<n<<" from "<<source<<" rod to "<<destination<<" rod."<<endl;
        tower_Of_Hanoi(n-1,intermediate,destination,source);

    }
}