#include<iostream>
using namespace std;
// #include<cstring>

string DefangIPaddress(string address){
    string ans;
    int index = 0;
    while(index < address.size()) {
        if(address[index] == '.')
            ans += "[.]";
        else
            ans += address[index];
    
            index++;
    }
    return ans;
}
int main(){
    cout<<"Enter the IP address: ";
    string address;
    cin>>address;

    string result = DefangIPaddress(address);
    cout<<"the final output of IP Address : "<<result<<endl;
    return 0;
}