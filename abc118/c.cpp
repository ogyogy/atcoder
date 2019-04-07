#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < (n); i++)
#define REPR(i, n) for (ll i = (n); i >= 0; i--)
#define FOR(i, m, n) for (ll i = (m); i < (n); i++)
#define FORR(i, m, n) for (ll i = (m); i >= (n); i--)
#define INF 1e9
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define SZ(x) ((ll)(x).size())
#define SORT(x) sort((x).begin(), (x).end())
#define dump(x) cerr << #x << " = " << (x) << endl
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" \
                      << " " << __FILE__ << endl

ll gcd(ll x, ll y)
{
    ll r;
    if (x == 0 || y == 0)
        return 0;
    while ((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n)
    {
        cin >> a[i];
    }
    SORT(a);
    vector<ll> res;
    FOR(i, 1, n)
    {
        ll g = gcd(a[0], a[i]);
        if (g == 1)
        {
            cout << 1 << endl;
            return 0;
        }
        res.push_back(g);
        // dump(g);
    }
    cout << *min_element(ALL(res)) << endl;
    return 0;
}