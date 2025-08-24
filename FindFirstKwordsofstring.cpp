#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    // cin>>str;
    getline(cin, str); // This is used to input string with spaces.
    int k;
    cin >> k;
    int spaces = 0;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            spaces++;
        if (spaces == k)
            break;
        ans += str[i];
    }
    cout << ans;
    return 0;
}