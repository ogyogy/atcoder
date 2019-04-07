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
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n)
    {
        cin >> a[i];
        // dump(a[i]);
    }
    sort(ALL(a), greater<ll>());
    ll alice = 0, bob = 0;
    REP(i, n)
    {
        // dump(a[i]);
        if (i % 2 == 0)
        {
            alice += a[i];
        }
        else
        {
            bob += a[i];
        }
        // dump(alice);
        // dump(bob);
    }
    cout << alice - bob << endl;
    return 0;
}
