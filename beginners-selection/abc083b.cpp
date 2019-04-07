#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll res = 0;
    FOR(i, 1, n + 1)
    {
        ll c = 0, t = i;
        REP(j, 5)
        {
            c += t % 10;
            t /= 10;
        }
        if (a <= c && b >= c)
        {
            res += i;
        }
    }
    cout << res << endl;
    return 0;
}
