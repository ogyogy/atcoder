#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    ll n, k;
    cin >> n >> k;
    vector<ll> x(n);
    REP(i, n)
    {
        cin >> x[i];
    }
    ll res = 1e9;
    REP(i, n - k + 1)
    {
        ll xl = x[i];
        ll xr = x[i + k - 1];
        ll t1 = abs(xl) + abs(xl - xr);
        ll t2 = abs(xr) + abs(xl - xr);
        res = min({res, t1, t2});
    }
    cout << res << endl;
    return 0;
}
