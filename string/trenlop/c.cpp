#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int wordCount = 0;
    string word, maxlongword;

    // Duyệt qua từng ký tự của chuỗi
    for (int i = 0; i <= s.size(); ++i)
    {
        if (i == s.size() || s[i] == ' ')
        { // gap khoang trang hoac ket thuc chuoi
            if (!word.empty())
            {
                if (word.size() > maxlongword.size())
                {
                    maxlongword = word;
                }
                word.clear();
            }
        }
        else
        {
            word += s[i];
        }
    }

    cout << "tu dai nhat: " << maxlongword << endl;

    return 0;
}
