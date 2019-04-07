#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    ll n, k;
    cin >> n >> k;
    ll d = 0, e = 0;
    FOR(a, 1, n + 1)
    {
        if (a % k == 0)
        {
            d++;
        }
        if (a % k == k / 2)
        {
            e++;
        }
    }
    if (k % 2 == 0)
    {
        cout << d * d * d + e * e * e << endl;
    }
    else
    {
        cout << d * d * d << endl;
    }
    return 0;
}
