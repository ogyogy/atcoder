#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char const *argv[])
{
    ll a, b, c, x;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> x;
    ll res = 0;
    REP(i, a + 1)
    REP(j, b + 1)
    REP(k, c + 1)
    if (500 * i + 100 * j + 50 * k == x)
        res++;
    cout << res << endl;
    return 0;
}
