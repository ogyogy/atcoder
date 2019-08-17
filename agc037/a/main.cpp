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

ll resolve(string &s)
{
    ll res = s.length();
    for (ll i = 1; i < (ll)s.length();)
    {
        if (s[i - 1] == s[i])
        {
            res--;
            i += 3;
        }
        else
        {
            i++;
        }
    }
    return res;
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    ll res1 = resolve(s);
    reverse(ALL(s));
    ll res2 = resolve(s);
    cout << max(res1, res2) << endl;
    return 0;
}
