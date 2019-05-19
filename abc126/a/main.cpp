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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (s[k - 1] == 'A')
        s[k - 1] = 'a';
    else if (s[k - 1] == 'B')
        s[k - 1] = 'b';
    else if (s[k - 1] == 'C')
        s[k - 1] = 'c';
    cout << s << endl;
    return 0;
}
