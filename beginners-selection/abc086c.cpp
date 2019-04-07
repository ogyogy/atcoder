#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> t(n + 1, 0), x(n + 1, 0), y(n + 1, 0);
    FOR(i, 1, n + 1)
    cin >> t[i] >> x[i] >> y[i];
    bool res = true;
    REP(i, n)
    {
        ll dt = t[i + 1] + t[i];
        ll dx = abs(x[i + 1] - x[i]);
        ll dy = abs(y[i + 1] - y[i]);
        if (dt < dx + dy)
        {
            // 制限時間内に到達不可能
            res = false;
            break;
        }
        if (dt % 2 != (dx + dy) % 2)
        {
            // 余った時間で(x, y)と(x + 1, y)の間を往復不可
            res = false;
            break;
        }
    }
    cout << (res ? "Yes" : "No") << endl;
    return 0;
}
