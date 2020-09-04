#include<iostream>
using namespace std;


int main(){
  int n;
  cout<<"Enter the range of the list:";
  cin>>n;
  int count=0;
  for(int i =1; i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i%j==0){
        count+=1;
      }
    }
    if(count==1){
      cout<<i<<" ";
    }
  }
  return 0;
}
