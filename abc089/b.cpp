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
    string s;
    vector<ll> a(n, 0);
    REP(i, n)
    {
        cin >> s;
        if (s == "P")
            a[0] = 1;
        else if (s == "W")
            a[1] = 1;
        else if (s == "G")
            a[2] = 1;
        else if (s == "Y")
            a[3] = 1;
    }
    string res = accumulate(ALL(a), 0) == 3 ? "Three" : "Four";
    cout << res << endl;
    return 0;
}
