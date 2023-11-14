#include <iostream>
#include <string>
using namespace std;
void reverseString(string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        swap(str[start], str[end]);

        ++start;
        --end;
    }
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin>>s;
    reverseString(s);
    cout << "Reversed string: " <<s<<endl;
    return 0;
}
