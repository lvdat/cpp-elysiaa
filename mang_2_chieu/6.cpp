#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, i, j;
    cout << "Nhap ROWS: \n";
    cin >> m;
    cout << "Nhap COLS: \n";
    cin >> n;

    int arr[m][n];
    cout << "Ma tran co kich thuoc " << m << " x " << n << endl;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr[i][j] = (i + 1) * (j + 1);
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
