#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i, n)
    cin >> a[i];
    sort(a.begin(), a.end());

    ll alice = 0, bob = 0;
    REP(i, n)
    {
        ll point = a.back();
        a.pop_back();
        if (i % 2 == 0)
            alice += point;
        else
            bob += point;
    }
    cout << alice - bob << endl;
    return 0;
}
