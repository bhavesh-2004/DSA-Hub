#include<iostream>
#include<vector>
using namespace std;

int findSubString(string& str) {

    int first = 0, second = 0, len = str.size(), diff = 0;
    vector<int> count(256, 0);  
    
    while (first < str.size()) {
        if (count[str[first]] == 0) {
            diff++;
        }
        count[str[first]]++;
        first++;
    }
    
    for (int i = 0; i < 256; i++) {
        count[i] = 0;
    }
    
    first = 0;
    int minLen = len;

    while (second < str.size()) {
        while (diff && second < str.size()) {
            if (count[str[second]] == 0) {
                diff--;
            }
            count[str[second]]++;
            second++;
        }
        while (diff == 0) {  
            minLen = min(minLen, second - first);
            if (count[str[first]] == 1) {
                diff++;
            }
            count[str[first]]--;
            first++;
        }
    }
    
    return minLen;
}

 
int main(){

cout<<"Enter the string : ";
string str1;
cin>>str1;

int result = findSubString(str1);
cout<<"The smallest distinct window of the string : "<<result<<endl;
return 0;

}