#include<bits/stdc++.h>
using namespace std;
bool isPalindromeSentence(string s)
{
    int i = 0, j = s.length() - 1;
    while(i < j)
    {
        while(i < j && isalnum(s[i]) == 0) i++;
        while(i < j && isalnum(s[j]) == 0) j--;
        if(toupper(s[i]) != toupper(s[j]))
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if(isPalindromeSentence(s)){
        cout<<"The sentence is palindrome"<<endl;
    }
    else{
        cout<<"The sentence is not palindrome"<<endl;
    }
    return 0;
}
