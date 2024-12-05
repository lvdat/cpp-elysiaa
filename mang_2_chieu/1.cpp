#include <bits/stdc++.h>
#define FOR(a, b) for (a = 0; a < b; a++)
using namespace std;

int main()
{
    int m, n, i, j;
    cout << "Nhap m: \n";
    cin >> m;
    cout << "Nhap n: \n";
    cin >> n;

    int arr[m][n];

    cout << "Nhap ma tran " << m << " x " << n << endl;

    FOR(i, m)
    FOR(j, n)
    cin >> arr[i][j];

    cout << "Ma tran da nhap: \n";
    FOR(i, m)
    {
        FOR(j, n)
        cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}