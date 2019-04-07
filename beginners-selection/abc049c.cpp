#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    bool is_same = true;
    for (ll i = 0; i < s.length();)
    {
        bool is_find = false;
        if (s.substr(i, 5) == "maerd" || s.substr(i, 5) == "esare")
        {
            i += 5;
            is_find = true;
        }
        else if (s.substr(i, 6) == "resare")
        {
            i += 6;
            is_find = true;
        }
        else if (s.substr(i, 7) == "remaerd")
        {
            i += 7;
            is_find = true;
        }
        if (!is_find)
        {
            is_same = false;
            break;
        }
    }
    cout << (is_same ? "YES" : "NO") << endl;
    return 0;
}
