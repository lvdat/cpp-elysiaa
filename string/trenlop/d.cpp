#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Nhap chuoi: \n";
    getline(cin, s);
    int n, pos, i;
    cout << "Nhap n: \n";
    cin >> n;
    cout << "Nhap pos: \n";
    cin >> pos;

    string n1, n2, n3;

    cout << "n ki tu dau tien: ";
    for (i = 0; i < n; i++)
    {
        cout << s[i];
    }

    cout << "\nn ki tu cuoi: ";
    for (i = s.size() - n; i < s.size(); i++)
    {
        cout << s[i];
    }

    cout << "\nn ki tu bat dau tu pos:\n";
    if (pos >= 0 && pos < s.size())
    {
        for (i = pos; i < n + pos && i < s.size(); i++)
        {
            cout << s[i];
        }
    }
    else
    {
        cout << "Vi tri khong hop le";
    }

    return 0;
}