#include<iostream>

using namespace std;

char anagram(char arr[10]);

int main(){
    char word[4]="cat";

    cout<<anagram(word)<<endl;
}

char anagram(char arr[4]){
    char newWord[4]="";
    char temp;
    if(newWord==arr){
        cout<<"\n These are the anagrams fo the words.";
    }else{
        temp=arr[2];
        arr[2]=arr[1];
        arr[1]=temp;
    }
    return arr[4];

}