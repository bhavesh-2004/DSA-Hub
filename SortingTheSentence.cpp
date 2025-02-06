#include<iostream>
#include<string>
using namespace std;

string SortingTheSentence(string s) {
    string ans[10];
    int index = 0;
    string temp;
    int count = 0;
    
    while (index < s.size()) {
        if (s[index] == ' ') {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            temp.clear();
            count++;
        } else {
            temp += s[index];
        }
        index++;
    }

    // handle the last word
    int pos = temp[temp.size() - 1] - '0';
    temp.pop_back();
    ans[pos] = temp;
    count++;

    // create the sorted sentence
    string sortedSentence;
    for (int i = 1; i <= count; i++) {
        sortedSentence += ans[i];
        if (i != count) {
            sortedSentence += ' ';
        }
    }

    return sortedSentence;
}

int main() {
    cout << "Enter the String: ";
    string s;
    getline(cin, s);  // to read the full line with spaces

    string result = SortingTheSentence(s);
    cout << "Sorted Sentence: " << result << endl;
    return 0;
}
