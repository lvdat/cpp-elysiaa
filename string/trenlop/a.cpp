#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, result;
    getline(cin, s);

    for (char c : s)
    {
        if (c != ' ')
        {
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}