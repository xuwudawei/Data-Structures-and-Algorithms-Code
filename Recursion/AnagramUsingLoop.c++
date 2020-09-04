#include<iostream>
using namespace std;

int main(){
    string s="cat";
    for(int i=0;i<s.length();i++){ //3
        for(int j=0;j<s.length()-1;j++){
            cout<<s<<endl;
            char c=s[j];
            s[j]=s[j+1];
            s[j+1]=c;
        }
    }
}