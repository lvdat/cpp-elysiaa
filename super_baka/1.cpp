#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll solve(ll n)
{
    ll kq = 1;
    for (ll i = 2; i * i <= n; ++i)
    {
        int pw = 0;
        while (n % i == 0)
        {
            ++pw;
            n /= i;
        }
        if (pw % 2 == 1)
        {
            kq *= i;
        }
    }
    return kq * n;
}

int main()
{
    ll n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}
