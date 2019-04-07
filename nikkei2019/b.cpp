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
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    ll res = 0;
    REP(i, n)
    {
        ll d = 0;
        if (a[i] == b[i] && b[i] == c[i] && c[i] == a[i])
            ;
        else if (a[i] != b[i] && b[i] != c[i] && c[i] != a[i])
            res += 2;
        else
            res++;
    }
    cout << res << endl;
    return 0;
}
