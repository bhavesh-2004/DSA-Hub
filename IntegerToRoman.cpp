#include<iostream>
using namespace std;

string IntegerToRoman(int num){
 string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
  int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  string result ;

    for(int i=0; i<13; i++){
       while (num >= values[i]) {
            result += roman[i];
            num -= values[i];
        }

        
    }
    return result; 
}
int main(){

    cout<<"Enter the Number: ";
    int num1;
    cin>>num1;

    string result1 = IntegerToRoman(num1);
    cout<<"the conversion of Integer to roman : "<<result1<<endl;

    return 0;

}