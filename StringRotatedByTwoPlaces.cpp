 #include <iostream>
using namespace std;

void rotateclockwise(string &s){
    char c = s[s.size()-1]; // Last character
    for(int i = s.size() - 1; i > 0; i--){
        s[i] = s[i - 1];
    }
    s[0] = c;
}

void rotateanticlockwise(string &s){
    char c = s[0]; // First character
    for(int i = 0; i < s.size() - 1; i++){
        s[i] = s[i + 1];
    }
    s[s.size() - 1] = c;
}

bool isRotated(string str1, string str2){
    if(str1.size() != str2.size()){
        return false;
    }

    string clockwise = str1;
    string anticlockwise = str1;

    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if(clockwise == str2){
        return true;
    }

    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    return anticlockwise == str2;
}

int main(){
    cout << "Enter the String 1: ";
    string str1;
    cin >> str1;

    cout << "Enter the String 2: ";
    string str2;
    cin >> str2;

    if(isRotated(str1, str2)){
        cout << "The strings " << str1 << " and " << str2 << " are rotated versions of each other!" << endl;
    } else {
        cout << "The strings " << str1 << " and " << str2 << " are not rotated versions of each other!" << endl;
    }

    return 0;
}
