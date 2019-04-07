#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define INF 1e9

int main(int argc, char const *argv[])
{
    ll s;
    cin >> s;
    vector<ll> t(1000001, 0);
    REP(i, 1000001)
    {
        if (t[s] == 1)
        {
            cout << i + 1 << endl;
            break;
        }
        t[s] = 1;
        if (s % 2 == 0)
        {
            s /= 2;
        }
        else
        {
            s = 3 * s + 1;
        }
    }
    return 0;
}
