#include<iostream>
using namespace std;

int LongestPalindrome(string s){
    int lower[26]={0};
    int upper[26]={0};
//frequency updated
    for(int i = 0; i<s.size(); i++){
        if(s[i]>='a'){
            lower[s[i]- 'a']++;
        }
        else{
            upper[s[i]- 'A']++;
        }
    }
        int count = 0;
        int odd = 0;
        for(int i = 0; i<26; i++){
            //lower
            if(lower[i]%2==0){
                count+=lower[i];  
            }else{
                count+=lower[i]-1;
                odd = 1;
            }
            //upper
             if(upper[i]%2==0){
                count+=upper[i];
            }else{
                count+=upper[i]-1;
                odd = 1;
            }
        

         
    }
      return count+odd;
}
int main(){

 cout<<"Enter the string :";
 string s;
 cin>>s;

 int result =  LongestPalindrome(s);
 cout<<"The Longest Palindrome of String is = "<<result<<endl;
 return 0;

}
/*
#include<iostream>
#include<string>
using namespace std;

int LongestPalindrome(string s) {
    int lower[26] = {0};
    int upper[26] = {0};

    // Frequency update
    for(int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a') {
            lower[s[i] - 'a']++;
        } else {
            upper[s[i] - 'A']++;
        }
    }

    int count = 0;
    int odd = 0;
    for (int i = 0; i < 26; i++) {
        // Lower
        if (lower[i] % 2 == 0) {
            count += lower[i];
        } else {
            count += lower[i] - 1;
            odd = 1;
        }
        // Upper
        if (upper[i] % 2 == 0) {
            count += upper[i];
        } else {
            count += upper[i] - 1;
            odd = 1;
        }
    }

    return count + odd;
}

int main() {
    cout << "Enter the string: ";
    string s;
    cin >> s;

    int result = LongestPalindrome(s);
    cout << "The Longest Palindrome is: " << result << endl;
    return 0;
}

*/