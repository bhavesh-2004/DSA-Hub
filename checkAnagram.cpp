// Anagram : An anagram is a word or phrase formed 
// by rearranging the letters of a different word or phrase,
//  using all the original letters exactly once.

#include<iostream>
using namespace std;

bool checkAnagram(string s, string t){
    if(s.length()!= t.length()) 
    return false ;

    int count[256] = {0};
    for(int i=0; i<s.length(); i++){
        count[s[i]]++;
        count[t[i]]--;
    }
    for(int i=0; i<256; i++){
        if(count[i]!=0) 
        return false;
    }
    return true;
}
int main(){
 
cout<<"enter the string 1: ";
string str1;
cin>>str1;
cout<<"enter the string 2: ";
string str2;
cin>>str2;

bool result = checkAnagram(str1, str2);
if(!result){
    cout<<"the given string is not a Anagram";
}else{
    cout<<"the given string is a Anagram";
}

return 0;
}