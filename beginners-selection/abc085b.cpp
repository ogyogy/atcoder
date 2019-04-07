#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> d(n, 0);
    ll res = 0;
    REP(i, n)
    cin >> d[i];
    sort(d.begin(), d.end());
    d.erase(unique(d.begin(), d.end()), d.end());
    cout << d.size() << endl;
    return 0;
}
