// #include<iostream>
// // #include <cstring>
// using namespace std;
// int main()
// {
//     // char arr[] = {'B','H','A','V','E','S','H','X'};
//     // cout<<arr;
//     // char arr[6];
//     // cin>>arr;
//     // arr[2] = '\0';
//     // cout<<sizeof(arr);
//     // return 0;

//     // string s = "bhavesh";
//     // cout<<s;

//     string s1,s2,s3,s4;
//     s1 = "Bhavesh";
//     s1.push_back('R');
//     s2 = " Sonawanee";
//     s2.pop_back();
//     // s3 = s1 + s2; //string Concatination

//     // s3 = s1.append(s2);a
//     // cout<<s3;

//      s4 = s1+" Ravindra Sonawane";
//     cout<<s4;

//     // string s;
//     // getline(cin,s); // using getline function
//     // cout<<s<<endl;
//     // cout<<s.size();
    
    

    
// }

#include<iostream>
#include<vector>
#include<string>
using namespace std;

  string reverseVowels(string s) {
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

    // reverse(vowels.begin(), vowels.end());

    // Replace '#' with reversed vowels
    int second = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '#') {
            // s[i] = vowels[second];
            second++;
        }
    }

    return s;
        return s;
    }
