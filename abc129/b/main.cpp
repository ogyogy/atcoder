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
    vector<ll> w(n);
    vector<ll> x(n, 0);
    REP(i, n)
    {
        cin >> w[i];
    }
    ll min_diff = INF;
    FOR(i, 1, n)
    {
        ll sum1 = accumulate(w.begin(), w.begin() + i, 0);
        ll sum2 = accumulate(w.begin() + i, w.end(), 0);
        ll diff = abs(sum1 - sum2);
        min_diff = min(min_diff, diff);
    }
    cout << min_diff << endl;
    return 0;
}
