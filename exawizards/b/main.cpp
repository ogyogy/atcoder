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
    string s;
    cin >> n;
    cin >> s;
    ll r = 0, b = 0;
    REP(i, n)
    {
        if (s[i] == 'R')
            r++;
        else
            b++;
    }
    if (r > b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
