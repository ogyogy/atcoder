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
    ll n, m;
    cin >> n >> m;
    vector<ll> l(m), r(m);

    REP(i, m)
    {
        cin >> l[i] >> r[i];
    }
    ll l_max = *max_element(ALL(l)), r_min = *min_element(ALL(r));
    ll res = 0;
    // dump(l_max);
    // dump(r_min);
    FOR(i, 1, n + 1)
    {
        if (i >= l_max && i <= r_min)
            res++;
    }
    cout << res << endl;
    return 0;
}
