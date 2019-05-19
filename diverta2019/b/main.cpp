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
    ll r, g, b, n;
    ll res = 0;
    cin >> r >> g >> b >> n;
    for (ll i = 0; i <= n / r; i++)
    {
        for (ll j = 0; j <= (n - i * r) / g; j++)
        {
            ll k = (n - i * r - j * g) / b;
            if (i * r + j * g + k * b == n)
            {
                // dump(k);
                res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}
