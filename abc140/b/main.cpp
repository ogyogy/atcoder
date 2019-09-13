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
    vector<ll> a(n), b(n), c(n);
    ll res = 0;
    REP(i, n)
    {
        cin >> a[i];
    }
    REP(i, n)
    {
        cin >> b[i];
        res += b[i];
    }
    REP(i, n - 1)
    {
        cin >> c[i];
    }
    FOR(i, 0, n - 1)
    {
        if (a[i] == a[i + 1] - 1)
        {
            res += c[a[i] - 1];
        }
    }
    cout << res << endl;
    return 0;
}
