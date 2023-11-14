
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string toLowerCase(string s) {
    string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<=90 && s[i]>=65)
            {
                ans+=s[i]+32;
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;
    }
    //transform(str.begin(), str.end(), str.begin(), ::tolower);

int main() {
    string s;
    cout << "Enter a string: ";
    cin>>s;
    cout << "String in lowercase: " <<toLowerCase(s)<< endl;
    return 0;
}
