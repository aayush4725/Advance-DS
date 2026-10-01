#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string &str)
{
    stack<char> s;
    for (char ch : str)
    {
        s.push(ch);
    }

    for (char ch : str)
    {
        if (s.top() != ch)
        {
            return false;
        }
        s.pop();
    }
    return true;
}

template <typename T>
bool isPalindrome(const T &value)
{
    ostringstream converted;
    converted << value;
    return isPalindrome(converted.str());
}

int main()
{
    string testStr = "namen";
    int testNumber = 12321;
    if (isPalindrome(testStr))
    {
        cout << testStr << " is a palindrome." << endl;
    }
    else
    {
        cout << testStr << " is not a palindrome." << endl;
    }

    if (isPalindrome(testNumber))
    {
        cout << testNumber << " is a palindrome." << endl;
    }
    else
    {
        cout << testNumber << " is not a palindrome." << endl;
    }

    return 0;
}