//  Longest Substring Without Repeating Characters
#include<iostream>
#include<vector>
using namespace std;

 int lengthOfLongestSubstring(string s) {

        int len=0, first=0, second=0;
        vector<bool> count(256,false);
        while(second < s.size()){

            while(count[s[second]]){

                count[s[first]] = false;
                first++;

            }
            count[s[second]] = true;

            len = max(len,second-first+1);
            second++;
        }
        return len;
    }

int main(){
    cout<<"Enter the string: ";
    string s1;
    cin>>s1;

    int result =  lengthOfLongestSubstring( s1);
    cout<<"the longest substring of string : "<<result<<endl;
    return 0;
}