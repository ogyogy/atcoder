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

int main(int argc, char const *argv[])
{
    ll n, m;
    cin >> n >> m;
    vector<ll> x(m);
    REP(i, m)
    cin >> x[i];
    SORT(x);
    vector<ll> l(m - 1);
    REP(i, m - 1)
    {
        l[i] = x[i + 1] - x[i];
    }
    SORT(l);
    ll res = 0;
    REP(i, m - n)
    {
        res += l[i];
    }
    cout << res << endl;
    return 0;
}
