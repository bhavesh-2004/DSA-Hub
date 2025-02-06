#include<iostream>
#include<vector>
using namespace std;

string sortVowels(string s){
    vector<int> lower(26,0);
    vector<int> upper(26,0);

    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
        else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
    }

    string vowel;
    for(int i=0; i<26; i++){
        char c = 'A' + i;
        while(upper[i]){
            vowel += c; 
            upper[i]--;
        }
    } 
    for(int i=0; i<26; i++){
        char c = 'a' + i;
        while(lower[i]){
            vowel += c; 
            lower[i]--;
        }
    } 

    int second = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '#'){
            s[i] = vowel[second];
            second++;
        }
    } 

    return s;
}

int main(){
    string str1;
    cout << "Enter the String : ";
    cin >> str1;

    string result = sortVowels(str1);

    cout << "Sorted String of Vowels : " << result << endl;

    return 0;
}
