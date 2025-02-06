#include<iostream>
#include<vector>
using namespace std;

int factorialOfLargeNumber(int num){
int result, carry = 0; 
 
vector<int> ans(1,1);
 
while(num>1){
    for(int i=0; i<ans.size(); i++){
        result = ans[i]*num + carry;
        ans[i] = result%10;
        carry = result/10;
    }
    while(carry){
        ans.push_back(carry%10);
        carry = carry/10;
    }
    
    num--;
}
  for(int i=ans.size()-1; i>=0; i--){
   cout<< ans[i];
  }
 
}

int main(){
    cout<<"Enter the Number : ";
    int num1;
    cin>>num1;

    cout<<"the factorial of large number : "; 
    factorialOfLargeNumber(num1);
    
    return 0;
}