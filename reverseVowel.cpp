#include<iostream>
#include<string>
using namespace std;

 
bool isVowel(char c){
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

string reverseVowels(string s) {
    int left = 0; 
    int right = s.size() - 1;

    while (left < right) {
         
        if (!isVowel(s[left])) {
            left++;
        }
         
        else if (!isVowel(s[right])) {
            right--;
        }
    
        else {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
}

int main(){
    cout << "Enter the string: ";
    string str;
    cin >> str;

    string res = reverseVowels(str);
    cout << "Reversed vowels string: " << res << endl;

    return 0;
}
/*

PS C:\Users\Lenovo\Desktop\DSA_WITH-BHAVESH\chapter-4-Strings> ./a.exe
Enter the string: IceCreAm 
Reversed vowels string: AceCreIm
PS C:\Users\Lenovo\Desktop\DSA_WITH-BHAVESH\chapter-4-Strings> 

*/
