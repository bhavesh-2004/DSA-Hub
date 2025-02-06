#include<iostream>
#include<vector>
using namespace std;
bool checkPanagram(string sentence){
 vector<bool>alpha(26,0);
  for(int i = 0; i<sentence.size(); i++){
  alpha[sentence[i] - 'a'] = 1;
  }
 for(int i = 0; i<26; i++){
    if(alpha[i] == 0)
        return 0;
   }
   return 1;
}
int main(){
cout<<"Enter the string : ";
string s;
cin>>s;
bool result = checkPanagram(s); 
if(!result){
    cout<<"the given string is not panagram ";
}
else{
    cout<<"the given string is panagram";
}

return 0;
}