#include<iostream>
#include<vector>
using namespace std;

string sortString(string s){
    vector<int> alpha(26,0);

    for(int i = 0; i<s.size(); i++){
        alpha[s[i] - 'a']++;
    }
    string ans;
    for(int i = 0; i<26; i++){

        char c =  'a'+ i;

        while(alpha[i]){
            ans += c;
            alpha[i]--;
            
        }
         
    }
    return ans;
     
}
int main(){

    cout<<"Enter the string : ";
    string S; 
    cin>>S;
    string result  = sortString(S);
     cout<<"Sorted String : "<<result<<endl;

     return 0;
}