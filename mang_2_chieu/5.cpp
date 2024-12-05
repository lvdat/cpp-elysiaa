#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j;

    int arr[4][4];
    cout << "Nhap ma tran 4 x 4" << endl;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Ma tran da nhap: \n";
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int t = 0;

    for (i = 0; i < 4; i++)
    {
        t += arr[i][i];
    }
    cout << "Tong gia tri duong cheo chinh: " << t << endl;

    return 0;
}
