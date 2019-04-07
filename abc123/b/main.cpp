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

ll f(ll n)
{
    if (n % 10 == 0)
        return 0;
    else
        return 10 - n % 10;
}

int main(int argc, char const *argv[])
{
    ll a[5];
    vector<pair<ll, ll>> v(5);
    REP(i, 5)
    {
        cin >> a[i];
        v[i] = make_pair(f(a[i]), a[i]);
    }
    sort(ALL(v));
    ll res = 0;
    REP(i, 4)
    {
        // dump(i);
        // dump(v[i].first);
        // dump(v[i].second);
        if (v[i].first == 0)
        {
            res += v[i].second;
        }
        else
        {
            res += (v[i].second + v[i].first);
        }
    }
    res += v[4].second;
    cout << res << endl;
    return 0;
}
