#include <bits/stdc++.h>

using namespace std;

double duongtrungtuyen(int a, int b, int c)
{
    return sqrt(2 * b * b + 2 * c * c - a * a) / 2.0;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Duong trung tuyen tu dinh A: " << duongtrungtuyen(a, b, c) << endl;
    cout << "Duong trung tuyen tu dinh B: " << duongtrungtuyen(b, a, c) << endl;
    cout << "Duong trung tuyen tu dinh C: " << duongtrungtuyen(c, a, b) << endl;
    cout << "Duong trung tuyen co do dai lon nhat: " << max({duongtrungtuyen(a, b, c), duongtrungtuyen(b, a, c), duongtrungtuyen(c, a, b)});
    return 0;
}