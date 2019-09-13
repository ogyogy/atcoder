#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < (n); i++)
#define REPR(i, n) for (ll i = (n); i >= 0; i--)
#define FOR(i, m, n) for (ll i = (m); i < (n); i++)
#define FORR(i, m, n) for (ll i = (m); i >= (n); i--)
#define INF 1e9
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((ll)(x).size())
#define SORT(x) sort((x).begin(), (x).end())
#define dump(x) cerr << #x << " = " << (x) << endl
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
                      << " " << __FILE__ << endl

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> h(n);
    REP(i, n)
    {
        cin >> h[i];
    }
    ll res = 0;
    ll cnt = 0;
    REP(i, n - 1)
    {
        if (h[i] >= h[i + 1])
        {
            cnt++;
        }
        else
        {
            if (cnt > res)
            {
                res = cnt;
            }
            cnt = 0;
        }
    }
    if (cnt > res)
    {
        res = cnt;
    }
    cout << res << endl;
    return 0;
}
