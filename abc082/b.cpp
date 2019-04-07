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
    string s, t;
    cin >> s;
    cin >> t;
    if (s == t)
    {
        cout << "No" << endl;
        return 0;
    }
    // ll n = s.length(), m = t.length();
    sort(ALL(s));
    sort(ALL(t), greater<char>());
    // if (n < m)
    // {
    //     if (s.substr(0, n) == t.substr(0, n))
    //     {
    //         cout << "Yes" << endl;
    //         return 0;
    //     }
    //     REP(i, n)
    //     {
    //         if (s[i] < t[i])
    //         {
    //             cout << "Yes" << endl;
    //             return 0;
    //         }
    //     }
    //     cout << "No" << endl;
    // }
    // else
    // {
    //     REP(i, m)
    //     {
    //         if (s[i] < t[i])
    //         {
    //             cout << "Yes" << endl;
    //             return 0;
    //         }
    //     }
    //     cout << "No" << endl;
    // }
    if (s < t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
