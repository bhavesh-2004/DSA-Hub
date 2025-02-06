#include<iostream>
#include<algorithm>
// #include<cmath>
using namespace std;

    string add(string num1, string num2) {
        string ans;
        int index1 = num1.size()-1;
        int index2 = num2.size()-1;
        int sum;
        int carry = 0;

        while(index2>=0){
            sum =( num1[index1] - '0') + ( num2[index2] - '0') + carry;
            carry = sum/10;
            char c = '0' + sum%10;
            ans += c;
            index2--, index1--;
        }

        //index1
        
        while(index1>=0){
            sum =( num1[index1] - '0') +  carry;
            carry = sum/10;
            char c = '0' + sum%10;
            ans += c;
             index1--;
        }
        if(carry)
            ans += '1';

            reverse(ans.begin(), ans.end());


            return ans;
    }

    string addStrings(string num1, string num2) {
        if(num1.length()>num2.length()){
            return add(num1,num2);
        }else{
            return add(num2, num1);
        }
    }
int main(){
    cout<<"Enter the Str1 : ";
    string str1;
    cin>>str1;
      cout<<"Enter the Str2 : ";
    string str2;
    cin>>str2;
    string result = addStrings(str1, str2);
    cout<<"Addition of two string : "<<result<<endl;

    return 0;

}