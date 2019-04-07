#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    string target = "keyence";
    ll n = s.length();
    REP(i, n)
    {
        FOR(j, i + 1, n + 1)
        {
            if (s.substr(0, i + 1) + s.substr(j, n - j) == target)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
