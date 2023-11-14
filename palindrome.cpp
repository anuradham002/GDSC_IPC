
#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(const string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        while (!isalnum(str[start]) && start < end) {
            ++start;
        }

        while (!isalnum(str[end]) && start < end) {
            --end;
        }

        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }

        ++start;
        --end;
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin>>s;
    if (isPalindrome(s)) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }

    return 0;
}
