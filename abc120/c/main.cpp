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
    string s;
    cin >> s;
    ll res = 0;
    while (true)
    {
        string s_copy(s.begin(), s.end());
        REP(i, s.length() - 1)
        {
            if (s[i] != s[i + 1])
            {
                s_copy.erase(s_copy.begin() + i);
                s_copy.erase(s_copy.begin() + i);
                res += 2;
                break;
            }
        }
        if (s == s_copy || s_copy.length() == 0)
        {
            break;
        }
        else
        {
            s = s_copy;
        }
        // dump(s);
        // dump(s_copy);
    }
    cout << res << endl;
    return 0;
}
