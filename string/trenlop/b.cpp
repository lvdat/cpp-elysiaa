#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int wordCount = 0;
    string word;

    // Duyệt qua từng ký tự của chuỗi
    for (int i = 0; i <= s.size(); ++i)
    {
        if (i == s.size() || s[i] == ' ')
        { // gap khoang trang hoac ket thuc chuoi
            if (!word.empty())
            { // neu tu hien tai khong rong
                wordCount++;
                cout << word << endl; // in tu
                word.clear();         // xoa tu hien tai
            }
        }
        else
        {
            word += s[i];
        }
    }

    cout << "so tu trong chuoi: " << wordCount << endl;

    return 0;
}
